def DisplayBinary(No):
    Digit = 0

    while(No != 0):
        Digit = int(No % 2)
        print(Digit,end="")
        No = (int)(No / 2)

def main():
    Value = int(input("Enter Number : "))

    DisplayBinary(Value)

if __name__ == "__main__":
    main()