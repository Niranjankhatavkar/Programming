#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0X1;
    UINT iPos = 0X4000;
    UINT Ans = 0;

    printf("Enter a Number :");
    scanf("%d",&iNo);

    Ans = iNo & iMask; 

    if(Ans == iMask)
    {
        printf("15th bit is ON");
    }
    else
    {
        printf("15th bit is OFF");
    }

    return 0;
}