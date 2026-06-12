#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
    int iEven = 0,iOdd = 0,iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEven = iEven + Arr[iCnt];
        }
        else
        {
            iOdd = iOdd + Arr[iCnt];
        }
    }

    return iEven - iOdd;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter Number of Elements: ");
    scanf("%d",&iSize);

    p = (int*)malloc(sizeof(int) * iSize);

    if(p ==  NULL)
    {
        printf("Unable to Allocate Memory");
        return -1; 
    }

    printf("Enter Elements: \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);

    printf("Difference between odd and even values is %d",iRet);

    return 0;
}