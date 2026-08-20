from sklearn.datasets import load_iris

def main():
    print("-" * 30)
    print("Iris classification case study")
    print("-" * 30)

    DataSet = load_iris()

    # Meta Data of DataSet

    print("Independent Variables :")
    print(DataSet.feature_names)

    print("Dependent Variables :")
    print(DataSet.target_names)

if __name__ == "__main__":
    main()