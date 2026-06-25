#include<stdio.h>

void strcpyx(char *str1,char *str2)
{
    while(*str1 != '\0')
    {
        *str2 = *str1;

        str1++;
        str2++;
    }
    
}

int main()
{
    char Arr[20];
    char Brr[20] = {'\0'};

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    strcpyx(Arr,Brr);

    printf("%s\n",Arr);
    printf("%s",Brr);

    return 0;
}