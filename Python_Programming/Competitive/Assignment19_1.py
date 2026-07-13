Square = lambda no : no*no
    
def main():

    Value = int(input("Enter Number :"))

    Ret = Square(Value)

    print(f"Square of {Value} is {Ret}")

if __name__ == "__main__":
    main()