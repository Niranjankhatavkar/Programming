import schedule
import time

def CreateFile():
    TimeStamp = time.strftime("%d_%m_%Y_%H_%M_%S")

    FileName = "File_%s"%(TimeStamp)

    fobj = open(FileName,"w")

    fobj.write(f"File Name : {FileName}\n")
    fobj.write(f"Creation Date : {time.strftime("%d_%m_%Y")}\n")
    fobj.write(f"Creation Time : {time.strftime("%H_%M_%S")}\n")

    fobj.close()

def main():
    schedule.every(1).minute.do(CreateFile)

    while(True):
        schedule.run_pending()
        time.sleep(1)

if __name__ == "__main__":
    main()