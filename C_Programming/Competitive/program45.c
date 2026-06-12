#include<stdio.h>

int SubEvenOdd(int iNo)
{
    int iDigit = 0;

    int iEvenSum = 0;
    int iOddSum = 0;
    int iDiff = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDiff;
        }

        iNo = iNo / 10;
       
    }

    iDiff = iEvenSum - iOddSum;    
    
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet = SubEvenOdd(iValue);

    printf("%d",iRet);

    return 0;
}

// Time Complexity = O(N)