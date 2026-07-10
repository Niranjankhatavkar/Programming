from functools import reduce

Maximum = lambda no1,no2 : no1 if no1 > no2 else no2 

def main():

    Data = [10,21,35,42,58]
    
    RData = reduce(Maximum,Data)
    
    print("Maximum",RData)

if __name__ == "__main__":
    main()