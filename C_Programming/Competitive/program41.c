#include<stdio.h>

int CountEven(int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    int iDigit = 0;

    for(iCnt = 1; iCnt <= 4; iCnt++)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iCount++;
        }

        iNo = iNo / 10;
        
    }

    return iCount;
    
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("%d",iRet);

    return 0;
}

// Time Complexity = O(N)