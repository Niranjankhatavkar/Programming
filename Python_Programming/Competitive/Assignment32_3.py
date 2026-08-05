import schedule
import time
import sys

def ReadFile(FileName):
    try:
        fobj = open(FileName,"r")

        if(fobj.read() == ""):
            print("Error : File is Empty")

        else:
            print("--------------File Contents--------------\n")

            print(fobj.read())

            print("\n-----------------------------------------")

    except FileNotFoundError:
        print("Error : File Not Found")

    except PermissionError:
        print("Error : Permission Denied")

    except OSError:
        print("Error : File cannot be opened")
    


def main():
    schedule.every(1).minute.do(ReadFile,sys.argv[1])

    while(True):
        schedule.run_pending()
        time.sleep(1)

if __name__ == "__main__":
    main()