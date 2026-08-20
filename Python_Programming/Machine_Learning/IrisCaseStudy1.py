from sklearn.datasets import load_iris

def main():
    print("-" * 30)
    print("Iris classification case study")
    print("-" * 30)

    DataSet = load_iris()

    print(DataSet)

if __name__ == "__main__":
    main()