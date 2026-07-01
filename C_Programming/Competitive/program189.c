#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;

BOOL ChkBit(UINT iNo, UINT iPos1, UINT iPos2)
{
    UINT iMask1 = 0X1;
    UINT iMask2 = 0X1;

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    if(((iMask1 & iNo) == iMask1) || ((iMask2 & iNo) == iMask2))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UINT iValue = 0;
    UINT iLocation1 = 0;
    UINT iLocation2 = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    printf("Enter First Position : ");
    scanf("%d",&iLocation1);

    printf("Enter Second Position : ");
    scanf("%d",&iLocation2);

    bRet = ChkBit(iValue,iLocation1,iLocation2);

    if(bRet == TRUE)
    {
        printf("9th or 12th bit is ON");
    }
    else
    {
        printf("9th or 12th bit is OFF");
    }

    return 0;
}