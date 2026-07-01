def Calculation(No1,No2):

    print("Addition :",No1 + No2)
    print("Subtraction :",No1 - No2)
    print("Division :",No1 / No2)
    print("Multiplication :",No1 * No2)
    
def main():
    Value1 = int(input("Enter First Number : "))
    Value2 = int(input("Enter Second Number : "))

    Calculation(Value1,Value2)
    
if __name__ == "__main__":
    main()