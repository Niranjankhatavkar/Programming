#include<iostream>
using namespace std;

template <class X>
X Maximum(X No1,X No2, X No3)
{
    if(No1 > No2 && No1 > No3)
    {
        return No1;
    }

    else if(No2 > No1 && No2 > No3)
    {   
        return No2;
    }

    else 
    {
        return No3;
    }
}

int main()
{
    cout<<Maximum(43,35,54)<<"\n";
    cout<<Maximum(43.3f,35.7f,35.4f)<<"\n";
    cout<<Maximum(43.5352,35.9701,41.3535)<<"\n";

    return 0;
}