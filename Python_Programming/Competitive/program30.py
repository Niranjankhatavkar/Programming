def DisplayGrades(No):

    if(No >= 75 and No <= 100):
        print("Distinction")

    elif(No >= 60 and No < 75):
        print("First Class")

    elif(No >= 50 and No < 60):
        print("Second Class")

    elif(No <= 75 and No >= 0):
        print("Fail")

    else:
        print("Invalid Marks")

def main():
    Value = int(input("Enter Number : "))

    DisplayGrades(Value)

if __name__ == "__main__":
    main()