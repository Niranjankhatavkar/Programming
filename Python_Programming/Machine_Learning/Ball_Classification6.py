from sklearn import tree

# Rough -> 1
# Smooth -> 0

# Tennis -> 1
# Cricket -> 2

def main():
    print("Ball Classification case study")


    Independent = [[35,1],[47,1],[90,0],[48,1],[90,0],[35,1],[92,0],[35,1],[35,1],[35,1],[96,0],[43,1],[110,0]]
    # Testing Features = [35,1],[95,0]

    Dependent = [1,1,2,1,2,1,2,1,1,1,2,1,2]
    # Testing Labels = [1,2]

    model = tree.DecisionTreeClassifier()

    model = model.fit(Independent,Dependent)

    result = model.predict([(35,1),(95,0)])
    print("Predicted Result of Model :",result)

if __name__ == "__main__":
    main()