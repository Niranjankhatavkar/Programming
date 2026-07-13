import multiprocessing
import os

def CountOdd(no):
    count = 0

    for i in range(1,no+1):
        if(i % 2 != 0):
            count = count+1
    
    return count
        
def main():
    print("Process ID :",os.getpid())
    
    Elements = [1000000,2000000,3000000,4000000]
    Result = []

    print("Input :",Elements)

    pobj = multiprocessing.Pool()

    Result = pobj.map(CountOdd,Elements)

    pobj.close()
    pobj.join()

    print("Count of Odd Numbers :")
    print(Result)

if __name__  == "__main__":
    main()