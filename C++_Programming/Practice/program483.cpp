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

double Summation(double Arr[], int Size)
{
    int iCnt = 0;
    double sum;

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        sum = sum + Arr[iCnt];
    }

    return sum;
}

int main()
{
    double Brr[] = {10.2,20.5,30.6,40.3,50.9};

    Display(Brr,5);
    cout<<"Sum : "<<Summation(Brr,5)<<"\n";

    return 0;
}