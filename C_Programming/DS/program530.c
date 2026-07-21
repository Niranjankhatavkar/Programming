#include<stdio.h>

typedef unsigned long int ULONG;

ULONG Factorial(int iNo)
{   
    static iMult = 1;
        
    if(iNo != 0)
    {
        iMult = iMult * iNo;
        iNo--;

        Factorial(iNo);
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    ULONG iRet = 0;

    printf("Enter Frequency : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);      

    printf("Factorial : %lu\n",iRet);

    return 0;
}