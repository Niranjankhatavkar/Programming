#include<iostream>
using namespace std;

#pragma pack(1)
template<class T>
struct node
{
    int data;
    struct node* next;
};

template<class T>
class Stack
{
    private:
        struct node<T> *first;
        int iCount;

    public:
        Stack();
        void push(T iNo);       // Insert First
        T pop();                // Delete First
        T peep();               // Delete First
        void Display();
        int Count();
};

template<class T>
Stack<T> :: Stack()
{
    first = NULL;
    iCount = 0;
}

template<class T>
void Stack<T> :: push(T No)
{
    struct node<T> *newn = NULL;

    newn = new struct node<T>();

    newn->data = iNo;
    newn->next = NULL;
    
    newn->next = this->first;
    this->first = newn;

    iCount++;
}     

template<class T>
T Stack<T> :: pop()      
{
    T iValue = 0;

    struct node<T> *temp = NULL;

    if(first == NULL)
    {
        cout<<"Stack is Empty\n";
        return -1;
    }

    else
    {
        iValue = this->first->data;
        temp = first;

        first = first->next;
        
        delete(temp);

        iCount--;

        return iValue;
    }
}

template<class T>
T Stack<T> :: peep()             
{
    T iValue;

    if(first == NULL)
    {
        cout<<"Stack is Empty\n";
        return -1;
    }

    else
    {
        iValue = this->first->data;

        return iValue;
    }
}

template<class T>
void Stack<T> :: Display()
{
    struct node<T> *temp = NULL;
    temp = this->first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |\n";
        temp = temp->next;
    }
}

template<class T>
int Stack<T> :: Count()
{
    return iCount;
}

int main()
{
    Stack <int>sobj; 
    
    int iRet = 0;
    
    sobj.push(11);
    sobj.push(21);
    sobj.push(51);
    sobj.push(101);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Elements of Stack : "<<iRet<<"\n";

    iRet = sobj.pop();
    cout<<"Popped Element : "<<iRet<<"\n";

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Elements of Stack : "<<iRet<<"\n";

    iRet = sobj.peep();
    cout<<"Element : "<<iRet<<"\n";

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Elements of Stack : "<<iRet<<"\n";

    return 0;
}

