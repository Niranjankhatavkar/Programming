ChkDivisible = lambda no : (no % 5 == 0)

def main():
    Value = int(input("Enter Number :"))

    Ret = ChkDivisible(Value)

    if(Ret == True):
        print(f"{Value} is divisible by 5")
    else:
        print(f"{Value} is not divisible by 5")

if __name__ == "__main__":
    main()