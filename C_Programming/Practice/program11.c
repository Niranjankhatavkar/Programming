/*
    START
        Accept number as no
        If no is completely divisible by 2
            then print even
        othewise 
            print odd
    STOP
               
                OR

    START
        Accept number as no
        Divide no. by 2
        If remainder is 0 
            then print as zero
        Otherwise 
            print as odd
    STOP
*/

#include<stdio.h>

int main()
{
    int iValue = 0;
    int iRemainder = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRemainder = iValue % 2;

    if (iRemainder == 0)
    {
        printf("Number is Even\n");
    }

    else
    {
        printf("Number is odd\n");
    }

    return 0;
}