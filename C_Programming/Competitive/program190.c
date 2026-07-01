#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo,UINT iStart, UINT iEnd)
{
    int iCnt = 0;
    int iDiff = 0;
    UINT iMask = 0X1;
    UINT iMask1 = 0X1;
    UINT iAns = 0;

    iDiff = ((iEnd - iStart) + 1);

    for(iCnt = 1; iCnt < iDiff; iCnt++)
    {
        iMask = iMask << 1;
        iMask = iMask | iMask1;
    }

    iMask = iMask << (iStart - 1);

    iAns = iMask ^ iNo;

    return iAns;
}

int main()
{
    UINT iValue = 0;
    int iFirst = 0;
    int iLast = 0;
    UINT iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    printf("Enter Start of Range:");
    scanf("%d",&iFirst);

    printf("Enter end of Range:");
    scanf("%d",&iLast);

    iRet = ToggleBitRange(iValue,iFirst,iLast);

    printf("Toggled Number : %d",iRet);

    return 0;
}