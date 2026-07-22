#include<iostream>
using namespace std;

template <class T>
T Maximum(T No1,T No2)
{
    T Ans;

    if(No1 > No2)
    {
        Ans = No1;
    }
    else
    {
        Ans = No2;
    }

    return Ans;
}

int main()
{
    cout<<Maximum(43,35)<<"\n";
    cout<<Maximum(43.3f,35.7f)<<"\n";
    cout<<Maximum(43.5352,35.9701)<<"\n";

    return 0;
}