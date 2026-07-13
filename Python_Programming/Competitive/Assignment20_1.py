import threading

def Even():
    for i in range(1,11):
        print(i*2,end=" ")

    print("")
    

def Odd():
    for i in range(1,20,2):
        print(i,end=" ")
    
    print("")



def main():

    T1 = threading.Thread(target=Even, args=())
    
    T2 = threading.Thread(target=Odd, args=())

    T1.start()
    T2.start()
    
if __name__ == "__main__":
    main()