#include<stdio.h>

typedef unsigned int UINT;

UINT CountOne(UINT iNo)
{
    UINT iCount = 0;
    int iCnt = 0;
    UINT iMask = 0X1;

    while(iCnt < 32)
    {
        if((iNo | iMask) == iNo)
        {
            iCount++;
        }

        iMask = iMask << 1;
        iCnt++;
    }

    return iCount;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountOne(iValue);

    printf("Count of ON bit is %d",iRet);

    return 0;
}