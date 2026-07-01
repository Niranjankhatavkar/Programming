def ChkPerfect(No):
    sum = 0
    for i in range(1,(No)):
        if(No % i == 0):
            sum = sum + i
    
    if(sum == No):
        return True
    else:
        return False

def main():


    Value = int(input("Enter Number : "))

    Ret = ChkPerfect(Value)

    if(Ret == True):
        print("Number is perfect")
    else:
        print("Number is NOT perfect")

if __name__ == "__main__":
    main()