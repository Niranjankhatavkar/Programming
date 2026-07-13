import multiprocessing
import os

def ChkPrime(no):
    counter = 0

    for i in range(1,no+1):
        count = 0
        for j in range(1,i):
            if(i % j == 0):
                count = count + 1

        if count > 1:
            pass
        else:
            counter  = counter + 1        

    return counter

def main():
    print("Process ID :",os.getpid())
    
    Elements = [1000,2000,3000,4000]
    Result = []

    print("Input :",Elements)

    pobj = multiprocessing.Pool()

    Result = pobj.map(ChkPrime,Elements)

    pobj.close()
    pobj.join()

    print(Result)

if __name__  == "__main__":
    main()