#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

#pragma pack(1)
int main()
{
    struct node obj;

    obj.data = 11;
    obj.next = NULL;   

    printf("%d\n",obj.data);

    return 0;
}