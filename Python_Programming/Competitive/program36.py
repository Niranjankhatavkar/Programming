ChkOdd = lambda no : (no % 2 != 0)

def main():
    Value = int(input("Enter Number :"))

    Ret = ChkOdd(Value)

    if(Ret == True):
        print(f"{Value} is odd")
    else:
        print(f"{Value} is not odd")

if __name__ == "__main__":
    main()