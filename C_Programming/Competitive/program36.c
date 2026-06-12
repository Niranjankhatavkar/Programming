#include<stdio.h>

double CircleArea(float fRadius)
{
    double PI = 3.14;
    double dArea = 0.0;
    
    dArea = PI * fRadius * fRadius;

    return dArea;
}

int main()
{   
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius of Circle:\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is %lf\n",dRet);

    return 0;
}

// Time Complexity = O(1)