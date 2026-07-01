#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT no)
{
    UINT iMask = 0;
    UINT iAns = 0;

    iMask = 0X00020010;

    iAns = no & iMask;

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
    BOOL bRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == TRUE)
    {
        printf("5th and 18th bit is ON");
    }
    else
    {
        printf("5th and 18th bit is OFF");
    }

    return 0;
}