#include<stdio.h>

void strupx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 97 && *str <= 122)
        {
            *str = (char)(*str - 32);
        }

        str++;
    }
   
}

int main()
{
    char Arr[20];

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    strupx(Arr);

    printf("%s",Arr);
    
    return 0;
}