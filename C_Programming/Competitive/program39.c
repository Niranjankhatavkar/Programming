#include<stdio.h>

double FhtoCs(float fTemp)
{
    double iCelcius = 0.0;

    iCelcius = (fTemp - 32) * (5.0 / 9.0);

    return iCelcius;
}

int main()
{   
    float fValue = 0;
    double dRet = 0;

    printf("Enter temperatue in Fahrenheit:\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Fahrenheit to Celcius is %lf\n",dRet);

    return 0;
}

// Time Complexity = O(1)