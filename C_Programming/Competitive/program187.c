#include<stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iNo1 , UINT iNo2)
{
    UINT iBit1 = 0;
    UINT iBit2 = 0;
    UINT iPos = 1;

    while(iNo1 != 0 || iNo2 != 0)
    {
        iBit1 = iNo1 % 2;
        iBit2 = iNo2 % 2;

        if(iBit1 == 1 && iBit2 == 1)
        {
            printf("%d\t",iPos);
        }

        iNo1 = iNo1 / 2;
        iNo2 = iNo2 / 2;
        iPos++;
    }
}

int main()
{
    UINT iValue1 = 0;
    UINT iValue2 = 0;

    printf("Enter First Number : ");
    scanf("%d",&iValue1);

    printf("Enter Second Number : ");
    scanf("%d",&iValue2);

    CommonBits(iValue1,iValue2);

    return 0;
}