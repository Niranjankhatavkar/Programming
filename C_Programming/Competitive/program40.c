#include<stdio.h>

double SquareMeter(int iValue)
{
    double dSquareMeter = 0.0;

    dSquareMeter = iValue * 0.0929;

    return dSquareMeter;
}

int main()
{   
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter area in Square Feet:\n");
    scanf("%f",&fValue);

    dRet = SquareMeter(fValue);

    printf("Square Feet to Square meter is %lf ",dRet);

    return 0;
}

// Time Complexity = O(1)