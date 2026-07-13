import threading

def EvenFactors(no):

    sum = 0

    for i in range(1,no):
        if(no % i == 0 and i % 2 == 0):
            sum = sum + i

    print("Sum of Even Factors :",sum)


def OddFactors(no):
    
    sum = 0

    for i in range(1,no):
        if(no % i == 0 and i % 2 != 0):
            sum = sum + i

    print("Sum of Odd Factors :",sum)


def main():

    T1 = threading.Thread(target=EvenFactors,args=(10,))
    T2 = threading.Thread(target=OddFactors,args=(10,))

    T1.start()
    T2.start()

    print("Exit from main")

if __name__ == "__main__":

    main()