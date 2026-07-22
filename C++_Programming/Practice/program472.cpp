#include<iostream>
using namespace std;

double AdditionD(double no1,double no2)
{
    double Ans;
    Ans = no1 + no2;

    return Ans;
}

float AdditionF(float no1,float no2)
{
    float Ans;
    Ans = no1 + no2;

    return Ans;
}

int AdditionI(int no1,int no2)
{
    int Ans;
    Ans = no1 + no2;

    return Ans;
}

int main()
{
    cout<<AdditionI(10,11)<<"\n";
    cout<<AdditionF(10.5,11.2)<<"\n";
    cout<<AdditionD(10.2,11.5)<<"\n";

    return 0;
}