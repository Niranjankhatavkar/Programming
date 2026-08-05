import schedule
import time
import os
import sys
import shutil

def CopyFile(Source_dir, Dest_dir):
    fobj = open("Log.txt","a")

    if((os.path.exists(Source_dir)) == False or (os.path.exists(Dest_dir)) == False):
        fobj.write(f"No such Location {Source_dir} or {Dest_dir}\n")
        return

    if((os.path.isdir(Source_dir)) == False or (os.path.isdir(Dest_dir)) == False):
        fobj.write("No such Directory {Source_dir} or {Dest_dir}\n")
        return

    for FolderName, SubFolder, FileName in os.walk(Source_dir):
        for fName in FileName:

            if(fName.endswith(".txt")):
                Source_file = os.path.join(Source_dir,fName)
                Dest_file = os.path.join(Dest_dir,fName)

                if(os.path.exists(Dest_dir)):
                    print(f"{fName} alredy exists")
                    return  

                shutil.copy(Source_file,Dest_file)


                fobj.write(f"File Copied : {fName}\n\n")

def main():
    schedule.every(5).seconds.do(CopyFile,sys.argv[1],sys.argv[2])

    while(True):
        schedule.run_pending()
        time.sleep(1)

if __name__ == "__main__":
    main()