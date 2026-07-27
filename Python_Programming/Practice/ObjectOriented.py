class Arithematic:
    def Addition(no1,no2):

        Ans = no1 + no2
        return Ans

    def Subtraction(no1,no2):

        Ans = no1 - no2
        return Ans
    
aobj = Arithematic()

print("Enter First Number :")
Value1 = int(input())

print("Enter Second Number :")
Value2 = int(input())

Ret = aobj.Addition(Value1, Value2)         # Error
print("Addition is :",Ret)
 
Ret = aobj.Subtraction(Value1, Value2)      # Error
print("Subtraction is :",Ret)