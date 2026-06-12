#include<stdio.h>

int DollarToINR(int iNo)
{
    int INR = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    INR = iNo * 70;

    return INR;
    
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("%d",iRet);

    return 0;
}

// Time Complexity = O(1)
// Where N >= 0