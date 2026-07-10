from functools import reduce

CountEven = lambda no : no % 2 == 0

def main():

    Data = [10,15,45,13,76,75]

    RData = (list)(filter(CountEven,Data))

    print("Count of even numbers",len(RData))

if __name__ == "__main__":

    main()