#include<stdio.h>

int Summation(int iNo)
{   
    int iSum = 0;
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        iSum = iSum + i;
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Frequency : \n");
    scanf("%d",&iValue);

    iRet = Summation(iValue);      

    printf("Summation : %d\n",iRet);

    return 0;
}