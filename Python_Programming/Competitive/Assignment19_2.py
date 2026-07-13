Multiplication = lambda no1,no2 : no1 * no2
    
def main():

    Value1 = int(input("Enter first Number :"))
    Value2 = int(input("Enter Second Number :"))

    Ret = Multiplication(Value1, Value2)

    print(f"Multiplication is {Ret}")

if __name__ == "__main__":
    main()