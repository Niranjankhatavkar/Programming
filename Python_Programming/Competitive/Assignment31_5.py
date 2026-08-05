import schedule
import time
import os
import sys
import datetime

def CountFiles(DirecoryName):
    FileCount = 0
    timestamp = time.strftime("%Y-%m-%d_%H-%M-%S")

    if(os.path.isdir(DirecoryName)):
        fobj = open("DirectoryCountLog.txt","a")

        for FolderName,SubDirectory, FileName in os.walk(DirecoryName):
            for fName in FileName:
                FileCount = FileCount + 1

        fobj.write(f"{os.getcwd()}\n")
        fobj.write(f"Number of Files : {FileCount}\n")
        fobj.write(f"Date & Time : {timestamp}\n")

        print(f"Files Counted : {timestamp}")

        fobj.close()    

    else:
        return

def main():

    Directory = sys.argv[1]

    schedule.every(5).seconds.do(CountFiles,Directory)

    while(True):
        schedule.run_pending()
        time.sleep(1)

if __name__ == "__main__":
    main()