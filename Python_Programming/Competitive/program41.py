Square = lambda no : no * no

def main():

    Data = [10,20,30,40,50]

    MData = list(map(Square,Data))
    
    print(MData)

if __name__ == "__main__":
    main()