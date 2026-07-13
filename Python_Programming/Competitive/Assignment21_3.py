import threading

lobj = threading.Lock()
count = 0


def Increment():
    global count

    for i in range(100):

        lobj.acquire()

        count = count + 1

        lobj.release()

    print("Count : ",count)

def main():

    Maximum = threading.Thread(target=Increment)
    Minimum = threading.Thread(target=Increment)

    Maximum.start()
    Minimum.start()

    Maximum.join()
    Minimum.join()



if __name__ == "__main__":
    main()