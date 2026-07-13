class Arithmetic:

    def __init__(self):
        self.Value1 = 0
        self.Value2 = 0
        self.Ans = 0

    def Accept(self):
        self.Value1 = int(input("Enter Number : "))
        self.Value2 = int(input("Enter Number : "))

    def Addition(self):
        return self.Value1 + self.Value2
    
    def Subtraction(self):
        return self.Value1 - self.Value2
    
    def Multiplication(self):
        return self.Value1 * self.Value2
    
    def Division(self):

        try:
            self.Ans = self.Value1 / self.Value2
        
        except Exception as eobj:
            print("Exception Occured :",eobj)

        return self.Ans

def main():
   aobj = Arithmetic()

   aobj.Accept()

   Ret = aobj.Addition()
   print("Addition :",Ret)

   Ret = aobj.Subtraction()
   print("Subtraction :",Ret)

   Ret = aobj.Multiplication()
   print("Multiplication :",Ret)

   Ret = aobj.Division()
   print("Division :",Ret)

if __name__ == "__main__":
    main()