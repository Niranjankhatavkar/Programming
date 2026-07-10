ChkLargest = lambda no1,no2,no3 : no1 if no1>no2 and no1>no3 else no2 if no2 > no1 and no2 > no3 else no3 

def main():
    Value1 = int(input("Enter First Number :"))
    Value2 = int(input("Enter Second Number :"))
    Value3 = int(input("Enter Third Number :"))

    Ret = ChkLargest(Value1,Value2,Value3)

    print("Largest is",Ret)
    
if __name__ == "__main__":
    main()