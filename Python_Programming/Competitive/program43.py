ChkOdd = lambda no : (no % 2 != 0)

def main():

    Data = [10,21,35,42,58]

    MData = list(filter(ChkOdd,Data))
    
    print("Odd numbers:",MData)

if __name__ == "__main__":
    main()