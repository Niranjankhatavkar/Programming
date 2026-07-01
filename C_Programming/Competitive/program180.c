#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iMask = 0;
    UINT iAns = 0;

    iMask =  0X0000000f;

    iAns = iMask | iNo;

    return iAns;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);    

    iRet = OnBit(iValue);

    printf("Modified Number is : %d",iRet);

    return 0;
}