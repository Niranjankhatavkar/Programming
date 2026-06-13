#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    static int iCount = 1; 

    for(i = 1; i <= iRow; i++)
    {
            for(j = 1; j <= iCol; j++,iCount++)  
            {
                printf("%d\t",iCount);
            }
        
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Number of Rows: ");
    scanf("%d",&iValue1);

    printf("Enter Number of Column: ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}