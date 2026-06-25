#include<stdio.h>

int LastChar(char *str,char ch)
{
    int iCount = 0;
    int charCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            charCount = iCount;
        }

        iCount++;
        str++;
    }
    
    return charCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;
    char cValue = '\0';

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter a Character :\n");
    scanf(" %c",&cValue);

    iRet = LastChar(Arr,cValue);

    printf("Last Occurance of %c is at %d",cValue,iRet);
    
    return 0;
}