#include<stdio.h>

void strcpyx(char *str1,char *str2, int no)
{
    int iCnt = 0;
    while(iCnt < no)
    {
        *str2 = *str1;

        str1++;
        str2++;
        iCnt++;
    }
    
}

int main()
{
    char Arr[20];
    char Brr[20] = {'\0'};
    int iValue = 10;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    strcpyx(Arr,Brr,iValue);

    printf("%s\n",Arr);
    printf("%s",Brr);

    return 0;
}