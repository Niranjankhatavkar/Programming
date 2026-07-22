#include<iostream>
using namespace std;

float Maximum(float No1,float No2)
{
    float Ans;

    (No1 > No2) ? Ans = No1 : Ans = No2;

    return Ans;
}

int main()
{
    cout<<Maximum(43.4f,32.6f)<<"\n";

    return 0;
}