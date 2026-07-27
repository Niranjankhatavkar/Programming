import sys
import os

def CheckFile(FileName):
    Flag = False

    if(os.path.exists(FileName) == True):
        Flag = True

    else:
        Flag = False

    return Flag

def main():
    Ret = False

    Ret = CheckFile(sys.argv[1])

    if(Ret == True):
        print(f"File with name {sys.argv[1]} exists in Current Directory")

    else:
        print(f"File with name {sys.argv[1]} doesn't exist in Current Directory")

if __name__ == "__main__":
    main()