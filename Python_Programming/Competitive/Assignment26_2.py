class Circle:
    PI = 3.14

    def __init__(self):
        self.Radius = 0
        self.Area = 0
        self.Circumference = 0

    def Accept(self):
        self.Radius = int(input("Enter Radius : "))
    
    def CalculateArea(self):
        self.Area = Circle.PI * self.Radius * self.Radius

    def CalculateCircumference(self):
        self.Circumference = 2 * Circle.PI * self.Radius   

    def Display(self):
        print("Radius :",self.Radius)
        print("Area :",self.Area)
        print("Circumference :",self.Circumference)

def main():
    cobj = Circle()

    cobj. Accept()
    cobj.CalculateArea()
    cobj.CalculateCircumference()
    cobj.Display()

if __name__ == "__main__":
    main()