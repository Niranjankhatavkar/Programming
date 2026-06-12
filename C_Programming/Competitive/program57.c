#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = - iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            return 1;
        }

        iNo = iNo / 10;
    }

}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == 1)
    {
        printf("Contains Zero");
    }
    else
    {
        printf("Doesnt Contain Zero");
    }

    return 0;
}

// Time Complexity = O(N)