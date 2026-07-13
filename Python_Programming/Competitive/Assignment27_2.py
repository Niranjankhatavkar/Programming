class BankAccount:
    ROI = 10.5

    def __init__(self,aName,iAmount):
        self.Name = aName
        self.Amount = iAmount

    def Display(self):
        print("Account Holder Name :",self.Name)
        print("Current Balance :",self.Amount)
        print("")

    def Deposit(self,amount):
        self.Amount = self.Amount + amount
    
    def Withdraw(self,amount):
        if(amount > self.Amount):
            print("Insufficient Balance")
            return
        
        else:
            self.Amount = self.Amount - amount

    def CalculateInterest(self):
        return (self.Amount * BankAccount.ROI) / 100

def main():
    bobj1 = BankAccount("Niranjan",183032)
    bobj1.Deposit(1000)
    bobj1.Withdraw(78543)
    bobj1.CalculateInterest()
    bobj1.Display()

    bobj2 = BankAccount("Raju",84610)
    bobj2.Display()
    bobj2.Deposit(132000)
    bobj2.Withdraw(3122142)
    bobj2.CalculateInterest()
    bobj2.Display()

if __name__ == "__main__":
    main()