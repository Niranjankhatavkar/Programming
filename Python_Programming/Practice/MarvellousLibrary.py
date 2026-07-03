def filterX(Task, Elements):
    Result = []

    for no in Elements:
        Ret = Task(no)          #CheckEven(no)
        
        if (Ret == True):
            Result.append(no)

    return Result

def mapX(Task ,Elemnts):
    
    Result = []

    for no in Elemnts:
        Ret = Task(no)          # Increment(no)

        Result.append(Ret)

    return Result

def reduceX(Task, Elemnts):

    sum = 0

    for no in Elemnts:

        sum = Task(sum,no)      # Addition(no)

    return sum