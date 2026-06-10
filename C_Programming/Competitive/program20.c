#include<stdio.h>

int FactDifference(int iNo)
{
    int iCnt = 0;
    int iFact = 0;
    int iNonFact = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFact = iFact + iCnt;
        }
        else
        {
            iNonFact = iNonFact + iCnt;
        }
    }
    
    return iFact - iNonFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet = FactDifference(iValue);

    printf("Difference of Factors and Non-Factors is %d",iRet);

    return 0;
}