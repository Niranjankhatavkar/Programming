class Arithematic:

    def __init__(self,a,b):
        self.no1 = a
        self.no2 = b        

    def Addition(self):

        Ans = self.no1 + self.no2
        return Ans

    def Subtraction(self):

        Ans = self.no1 - self.no2
        return Ans

print("Enter First Number :")
Value1 = int(input())

print("Enter Second Number :")
Value2 = int(input())

aobj = Arithematic(Value1, Value2)

# Ret = Addition(aobj, Value1, Value2)
Ret = aobj.Addition()         
print("Addition is :",Ret)
 
Ret = aobj.Subtraction()      
print("Subtraction is :",Ret)