#include<iostream>
using namespace std;

float Addition(float no1,float no2)
{
    float Ans;
    Ans = no1 + no2;

    return Ans;
}

int main()
{
    float Value1 = 10.5f, Value2 = 11.3f, Ret = 0.0f;

    Ret = Addition(Value1,Value2);

    cout<<"Addition is "<<Ret<<"\n";

    return 0;
}