#include<iostream>
using namespace std;

template <class X>
X Maximum(X No1,X No2)
{
    X Ans;

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