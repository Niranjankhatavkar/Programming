#include<stdio.h>

void StrRev(char *str)
{
    char *start = NULL;
    start = str; 

    char cTemp = '\0';

    while(*str != '\0')
    {
        str++;
    }

    str--;

    while(str >= start)
    {
        cTemp = *start;
        *start = *str;
        *str = cTemp;

        start++;
        str--;
    }
    
}

int main()
{
    char Arr[20];

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    StrRev(Arr);

    printf("%s",Arr);

    return 0;
}