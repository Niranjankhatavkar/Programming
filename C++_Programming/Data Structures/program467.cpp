#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node* next;
};

class Stack
{
    private:
        struct node* first;
        int iCount;

    public:
        Stack();
        void push(int iNo);     // Insert First
        int pop();              // Delete First
        int peep();             // Delete First
        void Display();
        int Count();
};

Stack :: Stack()
{
    this->first = NULL;
    this->iCount = 0;
}

void Stack :: push(int iNo)
{
    struct node* newn = NULL;

    newn = new struct node();

    newn->data = iNo;
    newn->next = NULL;
    
    newn->next = this->first;
    this->first = newn;

    iCount++;
}     

int Stack :: pop()      
{
    int iValue = 0;

    struct node* temp = NULL;

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

int Stack :: peep()             
{
    int iValue = 0;

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

void Stack :: Display()
{
    struct node *temp = NULL;
    temp = this->first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |\n";
        temp = temp->next;
    }
}

int Stack :: Count()
{
    return iCount;
}

int main()
{
    Stack sobj; 
    
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

