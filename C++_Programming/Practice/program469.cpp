#include<iostream>
using namespace std;

int Addition(int no1,int no2)
{
    int Ans;
    Ans = no1 + no2;

    return Ans;
}

int main()
{
    int Value1 = 10, Value2 = 11, Ret = 0;

    Ret = Addition(Value1,Value2);

    cout<<"Addition is "<<Ret<<"\n";

    return 0;
}