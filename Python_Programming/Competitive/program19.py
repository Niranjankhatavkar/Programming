def ReverseNum(No):

    Digit = 0
    Rev = 0

    while(No != 0):

        Digit = (int)(No % 10)

        Rev = (Rev * 10) + Digit
        
        No = (int)(No / 10)
    
    return Rev


def main():

    Value = int(input("Enter Number : "))

    Ret = ReverseNum(Value)

    print("Reversed Number is :",Ret)

if __name__ == "__main__":
    main()