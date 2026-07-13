import threading

def Ascending(no):
    
    for i in range(1,no+1):
        print(i)

def Descending(no):
    for i in range(no,0,-1):
        print(i)

def main():

    T1 = threading.Thread(target=Ascending,args= (50,))
    T2 = threading.Thread(target=Descending,args= (50,))

    T1.start()
    T1.join()


    T2.start()
    T2.join()

if __name__ == "__main__":

    main()