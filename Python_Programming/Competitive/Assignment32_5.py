import schedule
import time
import os
import sys

def DeleteEmpty(Directory):

    for FolderName, Subfolder, FileName in os.walk(Directory):
        for fName in FileName:
            fPath = os.path.join("/home/niranjan/Desktop/Assignment/Python/Backup",fName)

            if(os.path.getsize(fPath) == 0):
                os.remove(os.path.abspath(fPath))

                lobj = open("Deleted_Log.txt","a")

                lobj.write(f"{fName} path : {os.path.abspath(fName)}\n\n") 
                lobj.write("------------------------------------------------------------------------------------------------\n\n")

def main():
    schedule.every(5).seconds.do(DeleteEmpty,sys.argv[1])

    while(True):
        schedule.run_pending()
        time.sleep(1)

if __name__ == "__main__":
    main()