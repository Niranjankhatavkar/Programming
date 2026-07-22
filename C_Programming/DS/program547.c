#include<stdio.h>

int CountCapital(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCount++;
        }

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

    iRet = CountCapital(Arr);

    printf("Count of Capital : %d\n",iRet);

    return 0;
}