#include<stdio.h>

int CountChar(char *str,char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    
    return iCount;
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

    iRet = CountChar(Arr,cValue);

    printf("Number of %c Count: %d",cValue,iRet);
    
    return 0;
}