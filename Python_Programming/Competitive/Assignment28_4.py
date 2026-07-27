def main():
    FileName1 = str(input("Enter Name of file : "))
    FileName2 = str(input("Enter Name of copy file : "))

    try:
        fobj = open("Demo.txt","r")

        cobj = open(FileName2, "w")
        
        cobj.writelines(fobj.readlines())
        
        print(fobj.readlines())

        print(f"Contents of {FileName1} copied inside {FileName2}")

    except FileNotFoundError as fobj:
        print("File not present")

if __name__ == "__main__":
    main()