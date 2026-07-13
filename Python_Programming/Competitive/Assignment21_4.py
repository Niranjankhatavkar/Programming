import threading

Add = 0
multi = 0

def Addition(Elements):
    global Add

    for no in Elements:
        Add = Add + no



def Product(Elements):
    global multi

    multi = 1

    for no in Elements:
        multi = multi * no

def main():

    Data = [10,20,30,40,50]

    Sum = threading.Thread(target=Addition,args=(Data,))
    Multi = threading.Thread(target=Product,args=(Data,))

    Sum.start()
    Multi.start()

    Sum.join()
    Multi.join()

    print("Addition :",Add)
    print("Multiplication :",multi)

if __name__ == "__main__":
    main()