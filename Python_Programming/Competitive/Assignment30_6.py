import schedule
import datetime
import time

def Display1():
    print("Lunch Time!")    

def Display2():
    print("Wrap up Work")

def main():

    schedule.every().day.at("13:00").do(Display1)
    schedule.every().day.at("18:00").do(Display2)

    while(True):
        schedule.run_pending()
        time.sleep(1)

if __name__ == "__main__":
    main()