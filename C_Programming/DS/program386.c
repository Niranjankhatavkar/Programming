#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int count(PNODE first)
{
    return 0;
}

void Display(PNODE first)
{

}

void InsertAtFirst(PPNODE first, int iNo)
{

}

void InsertAtLast(PPNODE first, int iNo)
{

}

void InsertAtPos(PPNODE first, int iNo, int iPos)
{

}

void DeleteFirst(PPNODE first)
{

}

void DeleteLast(PPNODE first)
{

}

void DeleteatPos(PPNODE first, int iPos)
{

}

int main()
{
    PNODE head = NULL;



    return 0;
}