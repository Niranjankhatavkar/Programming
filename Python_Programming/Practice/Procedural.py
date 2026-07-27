def Addition(no1,no2):

    Ans = no1 + no2
    return Ans

def Subtraction(no1,no2):

    Ans = no1 - no2
    return Ans

print("Enter First Number :")
Value1 = int(input())

print("Enter Second Number :")
Value2 = int(input())

Ret = Addition(Value1, Value2)
print("Addition is :",Ret)
 
Ret = Subtraction(Value1, Value2)
print("Subtraction is :",Ret)
