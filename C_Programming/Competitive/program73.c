#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;

    for(iCnt = iLength; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] = iNo)
        {
            break;
        }
        
    }

    return iCnt;
}

int main()
{
    int iSize = 0,iCnt = 0,iValue = 0,iRet = 0;
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

    printf("Enter Element to Search:");
    scanf("%d",&iValue);

    iRet = LastOcc(p,iSize,iValue);

    printf("Last Occurance of %d is at index : %d",iValue,iRet);

    free(p);

    return 0;
}