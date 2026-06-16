#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    int iCount = 0; 
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 == 0)
        {
            for(j = 1,iCount = 1; j <= iCol; j++,iCount++)  
            {
                printf("%d\t",iCount);
            }
        }
        else
        {
            for(j = 1,ch='a'; j <= iCol; j++,ch++)  
            {
                printf("%c\t",ch);
            }

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