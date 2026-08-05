import schedule
import time
import os
import sys

def FileSizeMonitor(FileName):
    if((os.path.exists(FileName)) == True):

        if(os.path.isfile(FileName)):

            fobj = open("FileSizeLog.txt","a")

            FilePath = os.path.join("/home/niranjan/Desktop/Assignment/Python/",FileName)

            fobj.write(f"File Path : {FilePath}\n")
            fobj.write(f"File Size : {os.path.getsize(FileName)}\n")
            fobj.write(f"Date & Time : {time.ctime()}\n")

            fobj.write("\n---------------------------------------------------------------\n\n")

            fobj.close()

        else:
            return

    else:
        return

def main():
    schedule.every(5).seconds.do(FileSizeMonitor,sys.argv[1])

    while(True):
        schedule.run_pending()
        time.sleep(1)

if __name__ == "__main__":
    main()