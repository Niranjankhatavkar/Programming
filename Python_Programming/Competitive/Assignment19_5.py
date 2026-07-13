from functools import reduce

def ChkPrime(no):
    count = 0

    for i in range(2,no):
        if(no % i == 0):
            count = count + 1

    if(count == 0):
        return no

Multiply = lambda no : no * 2

Maximum = lambda max,no : max if max > no else no

def main():

    Data = []

    size = int(input("Enter Number of Elements :"))

    for i in range(size):
        no = int(input())
        Data.append(no)

    FData = (list)(filter(ChkPrime,Data))
    print("filter :",FData)

    MData = (list)(map(Multiply, FData))
    print("map :",MData)

    RData = reduce(Maximum, MData)
    print("reduce :",RData)

if __name__ == "__main__":
    main()