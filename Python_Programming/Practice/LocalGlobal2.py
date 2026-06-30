no = 11     # Global Variable

def Display():
    a = 21  # Local Variable
    print("From Display value of no is :",no)
    print("From Display Value of a is :",a)    

def Demo():
    print("From Demo value of a is :",a)    # Error
    print("From Demo",no)

Display()
Demo()