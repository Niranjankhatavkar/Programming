#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iSum = 1;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum * iCnt;
        }
    }
    
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of Factors is %d",iRet);

    return 0;
}