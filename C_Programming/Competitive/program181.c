#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos)
{   
    UINT iMask = 0X1;
    UINT iAns = 0;

    iMask = iMask << (iPos - 1);

    iAns = iMask & iNo;

    if(iAns == iMask)
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
    int iLocation = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    printf("Enter Position : ");
    scanf("%d",&iLocation);

    bRet = ChkBit(iValue,iLocation);

    if(bRet == TRUE)
    {
        printf("Bit is ON");
    }
    else
    {
        printf("Bit is OFF");
    }

    return 0;
}