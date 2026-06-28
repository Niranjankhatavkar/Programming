def Area(Radius,PI = 3.14):
    Ans = PI * Radius * Radius
    return Ans

def main():
    Ret = Area(10.5)                    # Function takes  default value of PI as 3.14 
    print("Area of Circle is: ",Ret)

    Ret = Area(10.5, 7.12)              # Function takes value of PI as 7.12    
    print("Area of Circle is: ",Ret)

if __name__ == "__main__":
    main()