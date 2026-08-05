import schedule
import os
import hashlib
import time
import sys
import smtplib
from email.message import EmailMessage

def CalculateCheckSum(FileName):
    fobj = open(FileName,"rb")

    hobj = hashlib.md5()

    Buffer = fobj.read(1024)

    while((len(Buffer)) > 0):
        hobj.update(Buffer)
        Buffer = fobj.read(1024)

    fobj.close()

    return hobj.hexdigest()

def FindDuplicate(DirectoryName):
    Ret = False

    Ret = os.path.exists(DirectoryName)

    if(Ret == False):
        print("Path is Invalid")
        return

    Ret = os.path.isdir(DirectoryName)

    if(Ret == False):
        print("Directory does not exists")
        return

    Duplicate = {}

    FileCount = 0

    for FolderName, SubFolder, FileName in os.walk(DirectoryName):
        for fName in FileName:
            FileCount = FileCount + 1    

            Path = os.path.join(FolderName,fName)

            CheckSum = CalculateCheckSum(Path)

            if CheckSum in Duplicate:
                Duplicate[CheckSum].append(Path)

            else:
                Duplicate[CheckSum] = [Path]

    return Duplicate,FileCount

def Marvelllous_Send_Mail(email,FileName,msg = EmailMessage()):

    msg["from"] = "automationtest@gmail.com"
    msg["To"] = email
    msg["Subject"] = "This is python email automation script."

    smtp = smtplib.SMTP_SSL("smtp.gmail.com",465)
    smtp.login("automationtest@gmail.com","App_Password")

    fobj = open(FileName,"rb")

    FileData = fobj.read()

    msg.add_attachment(FileData,
                       maintype = "text",
                       subtype = "plain",
                       filename = FileName)

    smtp.send_message(msg)

    smtp.quit()

# Delete Duplicate files
def DeleteDuplicate(DirectoryName,email):
    DuplicateCount = 0 
    TotalDeleted = 0
    msg = EmailMessage()

    Start_Time = time.strftime("%H:%M:%S")

    print("Inside Delete Duplicate")
    TimeStamp = time.strftime("%d_%m_%Y_%H_%M_%S")

    LogFileName = os.path.join("Marvellous",f"DuplicateRemovalLog_{TimeStamp}.log")

    if(os.path.isdir("Marvellous")):
        pass
    else:
        os.makedirs("Marvellous",exist_ok = True)

    fobj = open(LogFileName,"a")

    DuplicateDict,FileCount = FindDuplicate(DirectoryName)

    if(DuplicateDict == None):
        print("DuplicateDict is none")
        return

    Result = list(filter(lambda x : (len(x) > 1), DuplicateDict.values()))

    Count = 0
    TotalDeleted = 0

    for values in Result:
        for subvalues in values:
            DuplicateCount = DuplicateCount + 1
            if(DuplicateCount > 1):
                os.remove(subvalues)
                TotalDeleted = TotalDeleted + 1

    End_Time = time.strftime("%H:%M:%S")

    fobj.write(f"Name of Directory Scanned : {DirectoryName}\n")
    fobj.write(f"Start Time : {Start_Time}\n")
    fobj.write(f"End Time : {End_Time}\n")
    fobj.write(f"Total Number of Files Scanned : {FileCount}\n")
    fobj.write(f"Total Number of Duplicate Files Found : {DuplicateCount}\n")
    fobj.write(f"Total Number of Duplicate Files Deleted : {TotalDeleted}\n")

    msg.set_content(f"Name of Directory Scanned : {DirectoryName}\n"
                    f"Start Time : {Start_Time}\n"
                    f"End Time : {End_Time}\n"
                    f"Total Number of Files Scanned : {FileCount}\n"
                    f"Total Number of Duplicate Files Found : {DuplicateCount}\n"
                    f"Total Number of Duplicate Files Deleted : {TotalDeleted}\n")

    fobj.close()

    Marvelllous_Send_Mail(email,LogFileName,msg)
    print("Mail Sent")


def main():
    if(len(sys.argv) == 4):
        if(sys.argv[1] == "--h"):
            print("This Automation Script is used to perform :")
            print("1.Identify duplicate files")
            print("2.Delete the duplicate files")
            print("3.Create a log directory and store all the task done by the script")
            print("4.Mail after removal of each duplicate file")

        elif(sys.argv[1] == "--u"):
            print("Use the script as :\n")
            print(f"{sys.argv[0]} Absolute_Directory_Path Time_Interval Email_Address")
            print("Directory_Name : The directory to scan and delete duplicate files")
            print("Time_Interval : Time Interval in minutes for scanning directory")
            print("Email_Address : Recievers email address for updates of deleted files")

        else:
            schedule.every(int(sys.argv[2])).seconds.do(DeleteDuplicate,sys.argv[1],sys.argv[3])

            while(True):
                schedule.run_pending()
                time.sleep(1)

    else:
        print("Enter Valid Nuumber of Arguments")
        print("Use --h or --u flag for more information")

if __name__ == "__main__":
    main()