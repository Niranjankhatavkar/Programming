from functools import reduce

Product = lambda product,no : product * no

def main():

    Data = [10,15,45,13,76,75]

    RData = reduce(Product,Data)

    print("product is",RData)

if __name__ == "__main__":

    main()