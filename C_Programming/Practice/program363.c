#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

#pragma pack(1)

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
    PNODE head = NULL;
    PNODE temp = NULL;

    int iCount = 0;

    NODE obj1,obj2,obj3;

    head = &obj1;

    obj1.data = 11; 
    obj1.next = &obj2;   

    obj2.data = 21;
    obj2.next = &obj3;

    obj3.data = 51;
    obj3.next = NULL;

    temp = head;        // 100
    
    // Iteration

    while(temp != NULL)
    {
        iCount++;
        temp = temp->next;
    }

    printf("Number of Nodes : %d\n",iCount);

    return 0;
}