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

            delete []Arr;               // Before Deleting aobj it deallocates array
        }
};

int main()
{
    // Static Memory Allocation for Object
    // ArrayX aobj1(5);     

    ArrayX *aobj1 = new ArrayX(5);

    delete aobj1; // Deletes object pointed by aobj1

    cout<<"End of Main\n";

    return 0;
}