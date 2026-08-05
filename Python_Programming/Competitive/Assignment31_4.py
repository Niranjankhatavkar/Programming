import schedule
import time
import os
import sys

def CreateLogFile():
    timestamp = time.strftime("%Y-%m-%d_%H-%M-%S")

    LogFileName = "MarvellousLog_%s"%(timestamp)

    fobj = open(LogFileName,"w")

    fobj.write("Log File created Successfully\n")    
    fobj.write(f"Creation Time : {time.ctime()}")

    print(f"Log File created successfully : {time.ctime()}")

    fobj.close()    

def main():
    schedule.every(5).seconds.do(CreateLogFile)

    while(True):
        schedule.run_pending()
        time.sleep(1)

if __name__ == "__main__":
    main()