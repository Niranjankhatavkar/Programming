#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'a' || chDiv == 'A')
    {
        printf("Your exam is at 7 am");
    }
    
    else if(chDiv == 'b' || chDiv == 'B')
    {
        printf("Your exam is at 8:30 am");
    }
    
    else if(chDiv == 'c' || chDiv == 'C')
    {
        printf("Your exam is at 9:20 am");
    }

    else if(chDiv == 'd' || chDiv == 'D')
    {
        printf("Your exam is at 10:30 am");
    }

    else
    {
        printf("Invalid input");
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character :");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}