from sklearn.datasets import load_iris

def main():
    print("-" * 31)
    print("Iris classification case study")
    print("-" * 31)

    DataSet = load_iris()

    for i in range(len(DataSet.target)):
        print("ID %d, Feature %s, Label %s"%(i,DataSet.data[i],DataSet.target[i]))

if __name__ == "__main__":
    main()