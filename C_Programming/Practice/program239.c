#include<stdio.h>
#include<string.h>

int main()
{
    char *str = "Ganesh";   
    int iCount = 0;

    printf("Length of string is : %d\n",strlen(str));   // using header file

    while(*str != '\0')
    {
        iCount++;
        str++;
    }

    printf("Length of string is : %d\n",iCount);    
    
    return 0;
}