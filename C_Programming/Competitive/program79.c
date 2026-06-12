#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iLength)
{
    int iCnt = 0,iCount = 0,iDigit = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iDigit = Arr[iCnt];
        iCount = 0;
        
        while(Arr[iCnt] != 0)     
        {
            iCount++;
            Arr[iCnt] = Arr[iCnt] / 10;
        }

        if(iCount == 3)
        {
            printf("%d\t",iDigit);
        }
    }
}

int main()
{
    int iSize = 0,iCnt = 0,iRet = 0;
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

    Digits(p,iSize);

    free(p);

    return 0;
}