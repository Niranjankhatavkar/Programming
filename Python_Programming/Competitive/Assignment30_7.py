import schedule
import datetime
import time
import shutil
import os

def FileBackup(SourceFile, DestinationDirectory):
    TimeStamp = time.ctime()

    CopyFileName = "Data_%s.txt" %TimeStamp

    CopyFileName = CopyFileName.replace(":","_")
    CopyFileName = CopyFileName.replace(" ","_")

    Destination = os.path.join(DestinationDirectory,CopyFileName)

    shutil.copy(SourceFile,Destination)

    fobj = open("Backup_Log.txt","a")
    
    fobj.write(f"Backup Completed Successfully at : {datetime.datetime.now()}\n")

def main():
    SrcFile = input("Enter Source File Name : ")
    DestDirectory = input("Enter Destination Directory : ")

    schedule.every(1).hour.do(FileBackup,SrcFile,DestDirectory)

    while(True):
        schedule.run_pending()
        time.sleep(1)

if __name__ == "__main__":
    main()