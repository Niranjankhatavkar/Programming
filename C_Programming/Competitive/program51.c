#include<stdio.h>

void Display(int iNo1 , int iNo2)
{
    int iCnt = 0;

    for(iCnt = iNo1; iCnt <= iNo2; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    
}

int main()
{   
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Starting point:\n");
    scanf("%d",&iValue1);

    printf("Enter Ending point:\n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}

// Time Complexity = O(N)