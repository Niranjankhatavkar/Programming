#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;
    
    return iMeter;
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter KMs:\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("KM to meter is %d\n",iRet);

    return 0;
}

// Time Complexity = O(1)