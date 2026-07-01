def ChkPerfect(Radius):
    
    pi = 3.14
    return pi * Radius * Radius

def main():


    Value = int(input("Enter Number : "))

    Ret = ChkPerfect(Value)
    
    print("Area of Circle :",Ret)

if __name__ == "__main__":
    main()