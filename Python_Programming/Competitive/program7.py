def Display(No1,No2):
    
    if(No1 > No2):
        print(No1,"is greater")

    else:
        print(No2,"is greater")


def main():

    Value1 = int(input("Enter first Number : "))
    Value2 = int(input("Enter Second Number : "))

    Display(Value1,Value2)

if __name__ == "__main__":
    main()