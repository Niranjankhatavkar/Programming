#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        // Parametrised Constructor 
        ArrayX(int X)
        {
            cout<<"Inside Constructor"<<endl;
            iSize = X;                  // Characteristics Initialization
            Arr = new int[iSize];       // Resource Allocation
        }

        // Destructor
        ~ArrayX()
        {
            cout<<"Inside Destructor"<<endl;

            delete []Arr;               // Resource Deallocation
        }
};

int main()
{
    // Static Memory Allocation for Object
    // ArrayX aobj1(5);     

    ArrayX *aobj1 = new ArrayX(5);

    return 0;
}