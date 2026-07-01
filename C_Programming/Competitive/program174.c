#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT no)
{
    UINT iMask = 0;
    UINT Ans = 0;

    iMask = 0X000001C0;

    Ans = iMask & no;

    if(Ans == iMask)
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
    UINT Value = 0;
    BOOL bRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&Value);

    bRet =  ChkBit(Value);

    if(bRet == TRUE)
    {
        printf("7th, 8th, 9th bit is ON");
    }
    else
    {
        printf("31th and 1st bit is OFF");
    }

    return 0;
}