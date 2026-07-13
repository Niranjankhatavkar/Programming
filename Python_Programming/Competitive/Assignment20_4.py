import threading

def Capital(Stringx):

    count = 0

    for i in Stringx:
        if(i >= 'A' and i <= 'Z'):
            count = count + 1

    print("Number of uppercase characters :",count)

    print("Thread ID :",threading.get_ident())


def Small(Stringx):

    count = 0

    for i in Stringx:
        if(i >= 'a' and i <= 'z'):
            count = count + 1

    print("Number of lowercase characters :",count)

    print("Thread ID :",threading.get_ident())

def Digit(Stringx): 

    count = 0

    for i in Stringx:
        if(i >= '0' and i <= '9'):
            count = count + 1

    print("Number of Digits :",count)

    print("Thread ID :",threading.get_ident())


def main():

    Stringx = str(input("Enter String :"))

    T1 = threading.Thread(target=Capital,args= (Stringx,))
    T2 = threading.Thread(target=Small,args= (Stringx,))
    T3 = threading.Thread(target=Digit,args= (Stringx,))
    

    T1.start()
    T2.start()
    T3.start()   

    T1.join()
    T2.join()
    T3.join()

if __name__ == "__main__":

    main()