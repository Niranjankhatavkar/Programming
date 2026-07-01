def CalculateArea(Length,Width):
    
    return Length * Width

def main():


    Value1 = int(input("Enter Length : "))
    Value2 = int(input("Enter Width : "))

    Ret = CalculateArea(Value1,Value2)
    
    print("Area of rectangle :",Ret)

if __name__ == "__main__":
    main()