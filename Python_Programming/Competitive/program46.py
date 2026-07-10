from functools import reduce

Minimum = lambda no1,no2 : no1 if no1 < no2 else no2 

def main():

    Data = ["Marvellous","Infosystems","Pune","hello"]
    
    RData = reduce(Minimum,Data)
    
    print("Minimum",RData)

if __name__ == "__main__":
    main()