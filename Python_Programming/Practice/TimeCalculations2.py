def Factorial(no):

    Fact = 1

    for i in range(1,no+1):
        Fact = Fact * i

    return Fact

def main():

    Value = int(input("Enter Number :"))

    Ret = Factorial(Value)

    print(f"Factorial of {Value} : {Ret}")

if __name__ == "__main__":
    main()