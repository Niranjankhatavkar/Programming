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

    printf("%d\n",sizeof(obj));        // 12
    // 4(int) + 8(Pointer) = 12

    return 0;
}