#include<stdio.h>

void RangeEvenSum(int iStart , int iEnd )
{
    int iCnt = 0;
    int iSum  = 0;

    if(iStart > 0 && iEnd > 0)
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {   
            if(iCnt % 2 == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        
        printf("Sum of values in Range: %d",iSum);
    } 
    else
    {
        printf("Invalid input");
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

    RangeEvenSum(iValue1, iValue2);

    return 0;
}

// Time Complexity = O(N)