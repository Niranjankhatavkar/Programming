#include<stdio.h>

int Strlenx(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }

    return iCount;
}

int main()
{
    int iRet = 0;

    char Arr[20] = {'\0'};
    
    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = Strlenx(Arr);

    printf("Length of String : %d",iRet);

    return 0;
}