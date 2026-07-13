import multiprocessing
import os

def Factorial(no):
    fact = 1

    for i in range(1,no+1):
        
            fact = fact * i
    
    return fact
        
def main():
    print("Process ID :",os.getpid())
    
    Elements = [10,15,20,25]
    Result = []

    print("Input :",Elements)

    pobj = multiprocessing.Pool()

    Result = pobj.map(Factorial,Elements)

    pobj.close()
    pobj.join()
    
    print(Result)

if __name__  == "__main__":
    main()