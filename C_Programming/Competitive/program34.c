#include<stdio.h>

int EvenFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iMulti = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iMulti = iMulti * iCnt;
        }
    }

    return iMulti;
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Multiplication of Even Factorial is %d",iRet);

    return 0;
}

// Time Complexity = O(N)
// Where N >= 0