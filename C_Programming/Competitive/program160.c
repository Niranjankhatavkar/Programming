#include<stdio.h>

int WhiteCount(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = WhiteCount(Arr);

    printf("Number of White Count: %d",iRet);
    
    return 0;
}