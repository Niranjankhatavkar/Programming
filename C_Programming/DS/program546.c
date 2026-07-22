#include<stdio.h>

int Strlenx(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        iCount++;
        str++;

        Strlenx(str);
    }

    return iCount;
}


int main()
{
    int iRet = 0;

    char Arr[20] = {'\0'};
    
    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = Strlenx(Arr);

    printf("Length of String : %d\n",iRet);

    return 0;
}