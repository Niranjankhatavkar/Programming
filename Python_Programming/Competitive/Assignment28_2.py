def main():

    try:
        fobj = open("Demo.txt","w")
        print("File gets opened")

        fobj.write("Hello World\n")
        fobj.write("How are you")

        fobj = open("Demo.txt","r")
        
        fobj.read()

        print("Total no. of words :",fobj.tell())

    except FileNotFoundError as fobj:
        print("File not present")


if __name__ == "__main__":
    main()