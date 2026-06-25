#include<stdio.h>
#include<string.h>

int Count(const char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'A')
        {
            iCount++;
        }
        
        str++;      // str = str + 1; 
    }

    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);    

    iRet = Count(Arr);
    printf("Count of 'a' and 'A' is %d\n",iRet);

    return 0;
}