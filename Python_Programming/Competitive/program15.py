def ChkOdd(No):

    Even = 1
 
    for i in range(1,(No+1)):
        if(i % 2 != 0):
            print(i)


def main():

    Value = int(input("Enter Number : "))

    ChkOdd(Value)

if __name__ == "__main__":
    main()