#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iNo1 ,int iNo2)
{
    int iCnt = 0;

    printf("Elements Between Range :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] >= iNo1 && Arr[iCnt] <= iNo2)
        {
            printf("%d\t",Arr[iCnt]);
        }
        
    }
}

int main()
{
    int iSize = 0,iCnt = 0,iValue1 = 0,iValue2 = 0;
    int *p = NULL; 

    printf("Enter Number of Elements: ");
    scanf("%d",&iSize);

    p = (int*)malloc(sizeof(int) * iSize);

    if(p ==  NULL)
    {
        printf("Unable to Allocate Memory");
        return -1; 
    }

    printf("Enter Elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    printf("Enter Start Range:");
    scanf("%d",&iValue1);

    printf("Enter End Range:");
    scanf("%d",&iValue2);

    Range(p,iSize,iValue1,iValue2);

    free(p);

    return 0;
}