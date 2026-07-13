import threading

def ChkMaximum():
    print("Enter Number of Elements  :")
    Size = int(input())

    Data = []

    print("Enter Elements :")
    for i in range(Size):
        no = int(input())
        Data.append(no)

    max = 0

    for no in Data:
        if(no > max):
            max = no

    print("Maximum number :",max)

def ChkMinimum():
    print("Enter Number of Elements  :")
    Size = int(input())

    Data = []

    print("Enter Elements :")
    for i in range(Size):
        no = int(input())
        Data.append(no)

    min = Data[0]

    for no in Data:
        if(no < min):
            min = no

    print("Minimum number :",min)

def main():

    Maximum = threading.Thread(target=ChkMaximum,args=())
    Minimum = threading.Thread(target=ChkMinimum,args = ())

    Maximum.start()
    Maximum.join()

    Minimum.start()
    Minimum.join()

if __name__ == "__main__":
    main()