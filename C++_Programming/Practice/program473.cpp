#include<iostream>
using namespace std;

template <class T>
T Addition(T no1,T no2)
{
    T Ans;
    Ans = no1 + no2;

    return Ans;
}

int main()
{
    cout<<Addition(10,11)<<"\n";
    cout<<Addition(10.5,11.2)<<"\n";
    cout<<Addition(10.2,11.5)<<"\n";

    return 0;
}