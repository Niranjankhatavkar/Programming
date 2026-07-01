def Sum(No):

    Fact = 1
 
    for i in range(1,(No+1)):
        Fact = Fact * i

    return Fact

def main():

    Value = int(input("Enter Number : "))

    Factorial = Sum(Value)

    print("Factorial :",Factorial)

if __name__ == "__main__":
    main()