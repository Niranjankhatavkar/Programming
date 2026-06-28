#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0X1;
    UINT iAns = 0; 
    UINT iPos = 0;

    printf("Enter Number : \n");
    scanf("%d",&iNo);

    printf("Enter Position to check : \n");
    scanf("%d",&iPos);

    iMask = iMask << (iPos - 1);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("%d bit is ON",iPos);
    }
    else
    {
        printf("%d bit is OFF",iPos);
    }

    return 0;
}