def SumDigit(No):

    Digit = 0
    Sum = 0

    while(No != 0):

        Digit = (int)(No % 10)

        Sum = Sum + Digit
        
        No = (int)(No / 10)
    
    return Sum


def main():

    Value = int(input("Enter Number : "))

    count = SumDigit(Value)

    print("Sum of Digits : ",count)

if __name__ == "__main__":
    main()