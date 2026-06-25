#include<stdio.h>
#include<string.h>

int CountVowels(const char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
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

    iRet = CountVowels(Arr);
    printf("Count of Vowels is %d\n",iRet);

    return 0;
} 