from functools import reduce

Chklength = lambda s : s if len(s) > 5 else None 

def main():

    Data = ["Marvellous","Infosystems","Pune","hello"]

    RData = (list)(map(Chklength,Data))

    print("String having length more than 5",RData)

if __name__ == "__main__":

    main()