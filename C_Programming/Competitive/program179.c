#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleX(UINT iNo,UINT iPos1, UINT iPos2)
{
    UINT iMask1 = 0X1;
    UINT iMask2 = 0X1;
    UINT iMask = 0;
    UINT iAns = 0;

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    iMask = iMask1 | iMask2;

    iAns = iMask ^ iNo;

    return iAns;

}

int main()
{
    UINT iValue = 0;
    UINT iLocation1 = 0;
    UINT iLocation2 = 0;
    UINT iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);
    
    printf("Enter First Position to Toggle : ");
    scanf("%d",&iLocation1);

    printf("Enter Second Position to Toggle : ");
    scanf("%d",&iLocation2);

    iRet = ToggleX(iValue,iLocation1,iLocation2);

    printf("Modified Number is : %d",iRet);

    return 0;
}