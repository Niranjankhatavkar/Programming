class Demo:
    Value = 0

    def __init__(self,a,b):
        self.No1 = a
        self.No2 = b

    # Instance Method
    def fun(self):
        print(self.No1)
        print(self.No2)

    # Instance Method
    def gun(self):
        print(self.No1)
        print(self.No2)

def main():
    obj1 = Demo(11,21)
    obj2 = Demo(51,101)

    obj1.fun()
    obj2.fun()

    obj1.gun()
    obj2.gun()

if __name__ == "__main__":
    main()