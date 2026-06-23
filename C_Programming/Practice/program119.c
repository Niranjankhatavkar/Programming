#include<stdio.h>

// Error due to missing header file stdlib.h

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;

    // Step 1 : Accept Number of Elements
    printf("Enter Numeber of Elements: ");
    scanf("%d",&iLength);

    // Step 2 : Allocate the memory 
    Brr = (int *)malloc(iLength * sizeof(int));

    // Step 3 : Accept the values from user
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    // Step 4 : Use the memory (LOGIC)

    // Step 5 : Deallocate the memory

    free(Brr);

    return 0;
}