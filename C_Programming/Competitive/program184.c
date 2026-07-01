#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X1;
    UINT iAns = 0;

    iMask = iMask << (iPos - 1);

    iAns = iNo ^ iMask;

    return iAns;
}


int main()
{
    UINT iValue = 0;
    UINT iLocation = 0;
    UINT iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    printf("Enter Position : ");
    scanf("%d",&iLocation);

    iRet = ToggleBit(iValue, iLocation);

    printf("Modified Number is : %d",iRet);

    return 0;
}