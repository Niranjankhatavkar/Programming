def Sum(No):

    add = 0
 
    for i in range(1,(No+1)):
        add = add + i

    return add

def main():

    Value = int(input("Enter Number : "))

    Addition = Sum(Value)

    print("Sum of Numbers:",Addition)

if __name__ == "__main__":
    main()