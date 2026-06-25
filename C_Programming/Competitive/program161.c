#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }

        str++;
    }
    
    return FALSE;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter a Character :\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character Found");
    }
    else
    {
        printf("Character not Found");
    }

    return 0;
}