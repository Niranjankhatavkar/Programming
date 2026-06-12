#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength,int iNo)
{
    int iCnt = 0, iFrequency;
    BOOL bFlag = FALSE;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = TRUE;
        }
    }

    return bFlag;
}

int main()
{
    int iSize = 0,iCnt = 0,iValue = 0;
    BOOL bRet = FALSE;
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

    printf("Enter Element:");
    scanf("%d",&iValue);

    bRet = Check(p,iSize,iValue);

    if(bRet == TRUE)
    {
        printf("Element %d Found",iValue);
    }
    else
    {
        printf("Element %d not Found",iValue);
    }

    free(p);

    return 0;
}