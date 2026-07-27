def main():
    FileName1 = str(input("Enter Name of file : "))
    Word = str(input("Enter word to search : "))

    try:
        fobj = open("Demo.txt","r")
    
        fobj.readable

    except FileNotFoundError as fobj:
        print("File not present")

if __name__ == "__main__":
    main()