import threading

def EvenList(Data):

    sum = 0

    for i in Data:
        if(i % 2 == 0):
            sum = sum + i

    print("Sum of Even Elements :",sum)

def OddList(Data):
    
    sum = 0

    for i in Data:
        if(i % 2 != 0):
            sum = sum + i

    print("Sum of Odd Elements :",sum)


def main():

    Data = [10,31,43,54,76,43]  

    T1 = threading.Thread(target=EvenList,args= (Data,))
    T2 = threading.Thread(target=OddList,args=(Data,))

    T1.start()
    T2.start()

    T1.join()
    T2.join()

    print("Exit from main")

if __name__ == "__main__":

    main()