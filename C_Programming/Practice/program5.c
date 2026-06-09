/*
    Algorithm 

    START
        Accept First Number as no1
        Accept Second Number as no2
        Perform Addition of no1 and no2
        Display the result
    STOP
*/ 

#include<stdio.h>

int main()
{ 
    float i,j,k;

    printf("Enter first number: \n");
    scanf("%f",&i);

    printf("Enter second number: \n");
    scanf("%f",&j);

    k = i+j;

    printf("Addition is : %f\n",k);

    return 0;

}