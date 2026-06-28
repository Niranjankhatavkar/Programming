#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0X10000;               // 17th bit
    UINT iAns = 0; 

    printf("Enter Number : \n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("17th bit is ON");
    }
    else
    {
        printf("17th bit is OFF");
    }

    return 0;
}