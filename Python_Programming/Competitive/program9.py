def NumCube(No):
    
    return No * No * No

def main():

    Value = int(input("Enter Number : "))

    Ret = NumCube(Value)

    print("Cube is",Ret)

if __name__ == "__main__":
    main()