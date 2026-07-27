import sys

def CountFrequency(FileName, String):
    count = 0
    
    try:
        fobj = open(FileName,"r")

    except FileNotFoundError as eobj:
        print(eobj)

    Data = fobj.readline()

    while(Data != ""):

        for i in range(len(Data) - len(String) + 1):

            chunk = Data[i:i+len(String)]

            if(chunk == String):
                count = count + 1

            Data = fobj.readline()

    fobj.close()

    return count

def main():

    Word = input("Enter word to count Frequency : ")

    if(len(sys.argv) == 2):
        Ret = CountFrequency(sys.argv[1], Word)

        print(f"Frequency of {Word} : {Ret}")

    else:
        print("Invalid Number of Arguments")
        print("Enter Name of file as second argument")

if __name__ == "__main__":
    main()