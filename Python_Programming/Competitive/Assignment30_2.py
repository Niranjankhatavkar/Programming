import schedule
import datetime
import time

def Display():
    print(f"Current Data and Time : {datetime.datetime.now()} PM")

def main():

    schedule.every(1).minute.do(Display)

    while(True):
        schedule.run_pending()
        time.sleep(1)

if __name__ == "__main__":
    main()