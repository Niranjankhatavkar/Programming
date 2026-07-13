import multiprocessing
import os

def CountEven(no):
    count = 0

    for i in range(1,no+1):
        if(i % 2 == 0):
            count = count+1
    
    return count
        
def main():
    print("Process ID :",os.getpid())
    
    Elements = [100000,200000,300000,400000]
    Result = []

    print("Input :",Elements)

    pobj = multiprocessing.Pool()

    Result = pobj.map(CountEven,Elements)

    pobj.close()
    pobj.join()

    print("Count of Even Numbers :")
    print(Result)

if __name__  == "__main__":
    main()