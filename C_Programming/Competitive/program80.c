#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[],int iLength)
{
    int iCnt = 0,iDigit = 0,iSum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {   
        iSum = 0;
        while(Arr[iCnt] != 0)     
        {
            iDigit = Arr[iCnt] % 10;  // 782

            iSum = iSum + iDigit;

            Arr[iCnt] = Arr[iCnt] /10;
        }

        printf("%d ",iSum);
        
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

    DigitsSum(p,iSize);

    free(p);

    return 0;
}