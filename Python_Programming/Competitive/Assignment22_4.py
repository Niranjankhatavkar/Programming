import multiprocessing
import os

def SumPower(no):
    Sum = 0
    for i in range(1,no+1):
        Sum = Sum + (i ** 5)
    
    return Sum
        

def main():
    print("Process ID :",os.getpid())
    
    Elements = [100000,200000,300000,400000]
    Result = []

    print("Input :",Elements)

    pobj = multiprocessing.Pool()

    Result = pobj.map(SumPower,Elements)

    pobj.close()
    pobj.join()

    print(Result)

if __name__  == "__main__":
    main()