CheckEven = lambda No : (No % 2 == 0)

Increment = lambda No : No + 1

Addition = lambda No1,No2 : No1 + No2

def filterX(Task, Elements):
    Result = []

    for no in Elements:
        Ret = Task(no)      #CheckEven(no)
        
        if (Ret == True):
            Result.append(no)

    return Result

def mapX(Task ,Elemnts):
    
    Result = []

    for no in Elemnts:
        Ret = Task(no)      # Increment(no)

        Result.append(Ret)

    return Result

def reduceX(Task, Elemnts):

    sum = 0

    for no in Elemnts:

        sum = Task(sum,no)      # Addition(no)

    return sum



def main():
    Data = [13,12,8,10,11,20]

    print("Input Data is",Data)

    FData = list(filterX(CheckEven,Data))
    print("Data after filter :",FData)

    MData = list(mapX(Increment,FData))
    print("Data after map :",MData)

    RData = reduceX(Addition,MData)
    print("Data after reduce :",RData)

if __name__ == "__main__":
    main()