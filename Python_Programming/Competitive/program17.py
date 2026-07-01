def CountDigit(No):

    Digit = 0
    Count = 0

    while(No != 0):

        Digit = (int)(No % 10)

        Count = Count + 1
        
        No = (int)(No / 10)
    
    return Count


def main():

    Value = int(input("Enter Number : "))

    count = CountDigit(Value)

    print("Number of Digits are",count)

if __name__ == "__main__":
    main()