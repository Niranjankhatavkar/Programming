#include<iostream>
using namespace std;

void Display(double Arr[], int Size)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
    double Brr[] = {10.2,20.5,30.6,40.3,50.9};

    Display(Brr,5);

    return 0;
}