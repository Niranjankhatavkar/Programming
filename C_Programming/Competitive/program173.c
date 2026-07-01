#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT no)
{
    UINT iMask = 0;
    UINT Ans = 0;

    iMask = 0X08104040;

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
        printf("7th, 15th, 21th, 28th bit is ON");
    }
    else
    {
        printf("7th, 15th, 21th, 28th bit is OFF");
    }

    return 0;
}