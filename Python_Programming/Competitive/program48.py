from functools import reduce

ChkDivisibility = lambda no : (no % 3 == 0 and no % 5 == 0)

def main():

    Data = [10,15,45,13,76,75]

    RData = (list)(filter(ChkDivisibility,Data))

    print("Numbers divisible by 3 and 5",RData)

if __name__ == "__main__":

    main()