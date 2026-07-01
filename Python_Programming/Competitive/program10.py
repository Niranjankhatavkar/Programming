def ChkDivisible(No):

    if(No % 3 == 0 and No % 5 == 0):
        return True
    else:
        return False

def main():

    Value = int(input("Enter Number : "))

    Ret = ChkDivisible(Value)

    if(Ret == True):
        print(Value,"is Divisible by 3 & 5")

    else:
        print(Value,"is NOT Divisible by 3 & 5")


if __name__ == "__main__":
    main()