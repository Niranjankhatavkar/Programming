#include<iostream>
using namespace std;

class ArrayX
{   
    public:
        int *Arr;
        int Size;
        int i = 0;

        ArrayX(int No)
        {
            Size = No;
            Arr = new int[Size];
        }

        ~ArrayX()
        {
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter the Elements : "<<"\n";
            
            for(i = 0; i< Size;i++)
            {
                cin>>Arr[i];
            }
        }

        void Display()
        {
            cout<<"Elements of the Array : "<<"\n";
            
            for(i = 0; i < Size; i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }
};

int main()
{
    ArrayX aobj(5);

    aobj.Accept();
    aobj.Display();

    return 0;
}