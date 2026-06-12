#include<stdio.h>

int FactorialDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iEvenMulti = 1;
    int iOddMulti = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenMulti = iEvenMulti * iCnt;
        }
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iOddMulti = iOddMulti * iCnt;
        }
    }


    return iEvenMulti - iOddMulti;
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Multiplication of Even Factorial is %d",iRet);

    return 0;
}

// Time Complexity = O(N)
// Where N >= 0