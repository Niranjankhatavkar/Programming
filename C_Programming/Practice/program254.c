#include<stdio.h>
#include<string.h>

int CountSmall(const char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 97 && *str <= 122)
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

    iRet = CountSmall(Arr);
    printf("Count of small alphabets is %d\n",iRet);

    return 0;
} 