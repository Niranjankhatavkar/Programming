from sklearn.datasets import load_iris

def main():
    print("-" * 31)
    print("Iris classification case study")
    print("-" * 31)

    DataSet = load_iris()

    # Meta Data of DataSet

    print("Independent Variables :")
    print(DataSet.feature_names)

    print("\nLength of Independent variable :",len(DataSet.feature_names))

    print("\nDependent Variables :")
    print(DataSet.target_names)

    print("\nLength of Dependent variable :",len(DataSet.target_names))

if __name__ == "__main__":
    main()