class BookStore:
    NoOfBook = 0

    def __init__(self,bName,bAuthor):
        self.Name = bName
        self.Author = bAuthor
        BookStore.NoOfBook = BookStore.NoOfBook + 1

    def Display(self):
        print(f"{self.Name} by {self.Author}")
        print("Number of Book :",BookStore.NoOfBook)
        print("")

def main():

    bobj1 = BookStore("DSA Made Easy","Narasimha karumanchi")
    bobj1.Display()    

    bobj2 = BookStore("Thinking in c++","Bjarne Stroustrup")
    bobj2.Display()    

    bobj3 = BookStore("C programming","Ajay Mittal")
    bobj3.Display()    

if __name__ == "__main__":
    main()