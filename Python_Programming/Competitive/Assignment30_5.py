import schedule
import datetime
import time

def Task():
    fobj = open("Marvellous.txt","a")

    fobj.write(f"Task Executed at : {datetime.datetime.now()} pm\n")

    fobj.close()

def main():

    schedule.every(5).minutes.do(Task)

    while(True):
        schedule.run_pending()
        time.sleep(1)

if __name__ == "__main__":
    main()