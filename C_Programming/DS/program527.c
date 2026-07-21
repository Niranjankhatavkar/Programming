#include<stdio.h>

int Factorial(int iNo)
{   
    int iMult = 1;
        
    while(iNo != 0)
    {
        iMult = iMult * iNo;
        iNo--;
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Frequency : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);      

    printf("Factorial : %d\n",iRet);

    return 0;
}