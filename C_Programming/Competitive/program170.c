#include<stdio.h>

void strcpyx(char *str1,char *str2)
{
    while(*str1 != '\0')
    {
        str1++;
    }
    
    while(*str2 != '\0')
    {
        *str1 = *str2;
            
        str2++;
        str1++;
    }
    *str1 = '\0';
}

int main()
{
    char Arr[20] = {'\0'};
    char Brr[20] = {'\0'};

    printf("Enter First String :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Second String :\n");
    scanf(" %[^'\n']s",Brr);

    strcpyx(Arr,Brr);

    printf("Concatinated String : %s\n",Arr);

    return 0;
}