import threading

def ChkPrime():
    print("Enter Number of Elements  :")
    Size = int(input())

    Data = []

    print("Enter Elements :")
    for i in range(Size):
        no = int(input())
        Data.append(no)

    print("")

    print("Prime Number are")

    for j in Data:
        count = 0
        for no in range(2,j):
            if(j % no == 0):
                count = count+1
                break
            
        if count < 1:
            print(j)
          

def ChkNonPrime():
    print("Enter Number of Elements  :")
    Size = int(input())

    Data = []

    print("Enter Elements :")
    for i in range(Size):
        no = int(input())
        Data.append(no)

    print("")

    print("Non Prime Number are")

    for j in Data:
        for no in range(2,j):
            if(j % no == 0):
                print(j)
                break  


def main():

    Prime = threading.Thread(target=ChkPrime,args=())
    NonPrime = threading.Thread(target=ChkNonPrime,args = ())

    Prime.start()
    NonPrime.start()

if __name__ == "__main__":
    main()