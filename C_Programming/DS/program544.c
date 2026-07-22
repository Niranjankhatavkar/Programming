#include<stdio.h>

int main()
{
    char Arr[20] = {'\0'};
    
    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    printf("%s",Arr);

    return 0;
}