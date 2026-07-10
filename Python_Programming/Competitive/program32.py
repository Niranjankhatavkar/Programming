cube = lambda no : no*no*no

def main():
    Value = int(input("Enter Number :"))

    Ret = cube(Value)

    print("cube is ",Ret)

if __name__ == "__main__":
    main()