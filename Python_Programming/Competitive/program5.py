import sys

def main():
    No = int(input("Enter Number : "))

    print(type(No))
    print(id(No))
    print(sys.getsizeof(No))


if  __name__ == "__main__":
    main()
