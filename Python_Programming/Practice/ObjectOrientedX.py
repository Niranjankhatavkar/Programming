class Arithematic:
    def Addition(self, no1, no2):

        Ans = no1 + no2
        return Ans

    def Subtraction(self, no1, no2):

        Ans = no1 - no2
        return Ans
    
aobj = Arithematic()

print("Enter First Number :")
Value1 = int(input())

print("Enter Second Number :")
Value2 = int(input())

# Ret = Addition(aobj, Value1, Value2)
Ret = aobj.Addition(Value1, Value2)         
print("Addition is :",Ret)
 
Ret = aobj.Subtraction(Value1, Value2)      
print("Subtraction is :",Ret)