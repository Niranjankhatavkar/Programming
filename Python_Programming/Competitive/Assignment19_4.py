from functools import reduce

EvenNum = lambda no : no % 2 == 0

Square = lambda no : no * no

Addition = lambda Add,no : Add + no

def main():

    Data = []

    size = int(input("Enter Number of Elements :"))

    for i in range(size):
        no = int(input())
        Data.append(no)

    FData = (list)(filter(EvenNum,Data))
    print("filter :",FData)

    MData = (list)(map(Square, FData))
    print("map :",MData)

    RData = reduce(Addition, MData)
    print("reduce :",RData)

if __name__ == "__main__":
    main()