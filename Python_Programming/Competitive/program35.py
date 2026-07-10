ChkEven = lambda no : (no % 2 == 0)

def main():
    Value = int(input("Enter Number :"))

    Ret = ChkEven(Value)

    if(Ret == True):
        print(f"{Value} is Even")
    else:
        print(f"{Value} is not Even")

if __name__ == "__main__":
    main()