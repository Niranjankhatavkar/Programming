#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt <= (iNo * 10); iCnt++)
    {
        if(iCnt % iNo == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{   
    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}
// Time Complexity = O(N)
// Where N >= 0