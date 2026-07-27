def main():

    try:
        fobj = open("Demo.txt","r")
        
        print(fobj.readlines())

        print("Total no. of words :",fobj.tell())

    except FileNotFoundError as fobj:
        print("File not present")

if __name__ == "__main__":
    main()