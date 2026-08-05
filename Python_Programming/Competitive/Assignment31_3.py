import schedule
import time
import os
import sys

def DirectoryScanner(Directory):
    FileCount = 0
    subfCount = 0

    for DirectoryName,SubFolder,FileName in os.walk(Directory):

        for fName in FileName:
            FileCount = FileCount + 1

        for Subf in SubFolder:
            subfCount = subfCount + 1 

    print(f"Directory Name : {Directory}")
    print(f"Number of Files : ",FileCount)    
    print(f"Number of Subdirectories : ",subfCount)    
    print(f"Date and Time of Scanning : {time.ctime()}\n")

def main():

    Directory = sys.argv[1]

    schedule.every(1).minutes.do(DirectoryScanner,Directory)

    while(True):
        schedule.run_pending()
        time.sleep(1)

if __name__ == "__main__":
    main()