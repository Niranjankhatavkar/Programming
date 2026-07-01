#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0XF000000F;
    UINT iAns = 0;

    iAns = iNo ^ iMask;

    return iAns;
}


int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    printf("Modified Number is : %d",iRet);

    return 0;
}