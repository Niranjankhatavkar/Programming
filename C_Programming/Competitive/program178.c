#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleX(UINT no, UINT iPos)
{
    UINT iMask = 0X1;
    UINT iAns = 0;

    iMask = iMask << (iPos-1);

    iAns = iMask ^ no;

    return iAns;

}

int main()
{
    UINT iValue = 0;
    UINT iLocation = 0;
    UINT iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);
    
    printf("Enter Position to Toggle : ");
    scanf("%d",&iLocation);

    iRet = ToggleX(iValue,iLocation);

    printf("Modified Number is : %d",iRet);

    return 0;
}