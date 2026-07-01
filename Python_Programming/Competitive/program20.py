def ChkPallindrome(No):

    Temp = No
    Digit = 0
    Rev = 0

    while(No != 0):

        Digit = (int)(No % 10)

        Rev = (Rev * 10) + Digit
        
        No = (int)(No / 10)
    
    if(Rev == Temp):
        return True
    else:
        return False

def main():

    Value = int(input("Enter Number : "))

    Ret = ChkPallindrome(Value)

    if(Ret == True):
        print("Number is Pallindrome")
    else:
        print("Number is NOT Pallindrome")  

if __name__ == "__main__":
    main()