#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT no,UINT iPos)
{
    UINT iMask = 0X1;
    UINT Ans = 0;

    iMask = iMask << (iPos-1);
    iMask = ~iMask;

    Ans = no & iMask;

    return Ans;

}

int main()
{
    UINT iValue = 0;
    UINT iLocation = 0;
    UINT iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    printf("Enter Position : \n");
    scanf("%d",&iLocation);

    iRet = OffBit(iValue,iLocation);

    printf("Modified Number is %d",iRet);

    return 0;
}