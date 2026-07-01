#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo, int iPos)
{   
    UINT iMask = 0X1;
    UINT iAns = 0;

    iMask = iMask << (iPos - 1);

    iAns = iMask | iNo;

    return iAns;
}

int main()
{
    UINT iValue = 0;
    int iLocation = 0;
    UINT iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    printf("Enter Position : ");
    scanf("%d",&iLocation);

    iRet = OnBit(iValue,iLocation);

    printf("Modified Number is : %d",iRet);   

    return 0;
}