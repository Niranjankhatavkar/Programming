def Multi(No1,No2):

    return No1*No2

def main():
    No1 = int(input("Enter first Number: "))
    No2 = int(input("Enter Second Number: "))
    
    Ret = Multi(No1,No2)

    print("Multiplication is : ",Ret)

if __name__ == "__main__":
    main()