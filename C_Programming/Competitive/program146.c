#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

void DisplayASCII()
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 0; iCnt <= 127; iCnt++)
    {
        printf("%c",ch);

        ch++;
    }
}

int main()
{
    DisplayASCII();

    return 0;
}