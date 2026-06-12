#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int iMulti = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iMulti = iMulti * iDigit;

        iNo = iNo / 10;
       
    }

    return iMulti;
    
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d",iRet);

    return 0;
}

// Time Complexity = O(N)