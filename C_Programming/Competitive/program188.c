#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;

BOOL ChkBit(UINT iNo)
{
    UINT iMask1 = 0X100;
    UINT iMask2 = 0X800;

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
    BOOL bRet = FALSE;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);

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