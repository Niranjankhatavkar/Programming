def NumSquare(No):
    
    return No * No

def main():

    Value = int(input("Enter Number : "))

    Ret = NumSquare(Value)

    print("Square is",Ret)

if __name__ == "__main__":
    main()