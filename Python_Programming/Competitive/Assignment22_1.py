import multiprocessing

def SquareSum(Element):
    
    Sum = 0

    for no in range(1,Element+1):
        Sum = Sum + (no*no)

    return Sum

def main():
    Data = [1000000,2000000,3000000,4000000]

    Result = [] 

    pobj = multiprocessing.Pool()

    Result = pobj.map(SquareSum,Data)

    pobj.close()
    pobj.join()

    print("Sum of squares of all Elements :",Result)

if __name__ == "__main__":
    main()