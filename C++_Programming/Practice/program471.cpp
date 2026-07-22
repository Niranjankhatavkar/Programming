#include<iostream>
using namespace std;

double Addition(double no1,double no2)
{
    double Ans;
    Ans = no1 + no2;

    return Ans;
}

int main()
{
    double Value1 = 10.57787, Value2 = 11.74343, Ret = 0.00000;

    Ret = Addition(Value1,Value2);

    cout<<"Addition is "<<Ret<<"\n";

    return 0;
}