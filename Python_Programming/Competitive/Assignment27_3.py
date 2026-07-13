class Numbers:
    def __init__(self,no):
        self.Value = no

    def ChkPrime(self):
        count = 0

        for i in range(2,self.Value):
            if(self.Value % i == 0):
                count = count + 1
        
        if(count >= 1):
            return False
        
        else:
            return True
        
    def ChkPerfect(self):
        sum = 0

        for i in range(1,self.Value):
            if(self.Value % i == 0):
                sum = sum + i

        if(sum == self.Value):
            return True
        
        else:
            return False
        
    def Factors(self):
        print("Factors :")
        for i in range(1,self.Value):
            if(self.Value % i == 0):
                print(i)
        
    def SumFactors(self):
        sum = 0

        for i in range(1,self.Value):
            if(self.Value % i == 0):
                sum = sum + i

        return sum

def main():
    nobj = Numbers(13)

    Ret = nobj.ChkPrime()

    if(Ret == True):
        print("Number is Prime")

    else:
        print("Number is NOT Prime")

    Ret = nobj.ChkPerfect()
    
    if(Ret == True):
        print("Number is Perfect")

    else:
        print("Number is NOT Perfect")

    nobj.Factors()

    Ret = nobj.SumFactors()
    print("Sum of Factors :",Ret)

if __name__ == "__main__":
    main()