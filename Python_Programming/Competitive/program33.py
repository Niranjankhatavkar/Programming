ChkGreater = lambda no1,no2 : no1 > no2

def main():
    Value1 = int(input("Enter first Number :"))
    Value2 = int(input("Enter Second Number :"))

    Ret = ChkGreater(Value1,Value2)

    if(Ret == True):
        print(f"{Value1} is greater")
    else:
        print(f"{Value2} is greater")

if __name__ == "__main__":
    main()