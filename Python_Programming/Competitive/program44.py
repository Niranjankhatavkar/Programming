from functools import reduce

Addition = lambda No : No  

def main():

    Data = [10,21,35,42,58]

    RData = reduce(Addition,Data)
    
    print("Sum is",RData)

if __name__ == "__main__":
    main()