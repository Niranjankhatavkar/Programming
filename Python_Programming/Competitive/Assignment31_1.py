import schedule
import time

def Display(message):
    print(message)

def main():

    msg = input("Enter Message to Display : ")
    TimeInterval = int(input("Enter Time Interval(Seconds) : "))

    schedule.every(TimeInterval).seconds.do(Display,msg)

    while(True):
        schedule.run_pending()
        time.sleep(1)

if __name__ == "__main__":
    main()