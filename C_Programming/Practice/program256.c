#include<stdio.h>
#include<string.h>

int CountCapital(const char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
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

    iRet = CountCapital(Arr);
    printf("Count of Capital alphabets is %d\n",iRet);

    return 0;
} 