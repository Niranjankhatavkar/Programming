def main():

    FileName = str(input("Enter File Name : "))

    try:
        with open(FileName,"r") as file:
            Lines = sum(1 for line in file)

        print("Number of Lines ",Lines)

    except FileNotFoundError as fobj:
        print("File not present")

if __name__ == "__main__":
    main()