def ChkPrime(No):

    Divisibles = 0
 
    for i in range(2,No):
        
        if(No % i == 0):
            Divisibles = Divisibles + 1
            
    return Divisibles

def main():


    Value = int(input("Enter Number : "))

    count = ChkPrime(Value)

    if(count >= 1):
        print("Number is NOT prime")

    else:
        print("Number is prime")

if __name__ == "__main__":
    main()