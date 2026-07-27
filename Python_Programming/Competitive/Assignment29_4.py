import sys

def CompareFiles(FileName1,FileName2):
    try:
        fobj1 = open(FileName1,"r")
        fobj2 = open(FileName2,"r")


    except FileNotFoundError as eobj:
        print(eobj)

    if(fobj1.readlines() == fobj2.readlines()):
        print("Success")

    else:
        print("Failure")

def main():

    if(len(sys.argv) == 3):
        CompareFiles(sys.argv[1],sys.argv[2])

    else:
        print("Invalid Number of Arguments")
        print("Enter Name of file as second and Third argument")

if __name__ == "__main__":
    main()