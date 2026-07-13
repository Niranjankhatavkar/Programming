from functools import reduce

chkGreater = lambda no : no >= 70

Increment = lambda no : no + 10

Product = lambda multi,no : multi * no

def main():

    Data = []

    size = int(input("Enter Number of Elements :"))

    for i in range(size):
        no = int(input())
        Data.append(no)

    FData = (list)(filter(chkGreater,Data))
    print("filter :",FData)

    MData = (list)(map(Increment, FData))
    print("map :",MData)

    RData = reduce(Product, MData)
    print("reduce :",RData)

if __name__ == "__main__":
    main()