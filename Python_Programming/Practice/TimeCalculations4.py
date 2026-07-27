import time

def Factorial(no):

    Fact = 1

    for i in range(1,no+1):
        Fact = Fact * i

    return Fact

def main():

    Value = int(input("Enter Number :"))

    Start_Time = time.time()
    
    Ret = Factorial(Value)
    
    End_Time = time.time()

    print(f"Factorial of {Value} : {Ret}")

    print(f"Time required : {End_Time - Start_Time:.5f} seconds")

if __name__ == "__main__":
    main()