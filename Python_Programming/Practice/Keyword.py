def Area(Radius,PI):
    Ans = PI * Radius * Radius
    return Ans

def main():
    Ret = Area(PI = 3.14, Radius = 10.5)    # (PI = 3.14,10.5) - Not allowed
    print("Area of Circle is: ",Ret)

if __name__ == "__main__":
    main()