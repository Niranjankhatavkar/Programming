#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{   
    int iValue = 0;
    BOOL iRet = FALSE;
    printf("Enter Number:\n ");
    scanf("%d",&iValue);

    iRet = Check(iValue);

    if(iRet == TRUE)
    {
        printf("Number is divisile by 5");
    }
    else
    {
        printf("Number is not divisile by 5");
    }

    return 0;
}
