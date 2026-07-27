import sys

def ReadFile(FileName):
    try:
        fobj = open(FileName,"r")

        print(fobj.readlines())

    except FileNotFoundError as eobj:
        print(eobj)


def main():

    if(len(sys.argv) == 2):
        ReadFile(sys.argv[1])

    else:
        print("Invalid Number of Arguments")
        print("Enter Name of file as second argument")

if __name__ == "__main__":
    main()