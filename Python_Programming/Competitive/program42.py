ChkEven = lambda no : (no % 2 == 0)

def main():

    Data = [10,21,35,42,58]

    MData = list(filter(ChkEven,Data))
    
    print(MData)

if __name__ == "__main__":
    main()