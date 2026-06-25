#include<stdio.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 65 && *str <= 90)
        {
            *str = (char)(*str + 32);
        }

        str++;
    }
   
}

int main()
{
    char Arr[20];

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    strlwrx(Arr);

    printf("%s",Arr);
    
    return 0;
}