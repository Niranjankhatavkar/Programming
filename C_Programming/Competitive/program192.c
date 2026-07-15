#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first)
{  
    while(first != NULL)
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int Count(PNODE first)
{   
    int iCount = 0;

    if(first == NULL)
    {
        return 0;
    }

    else
    {
        while(first != NULL)
        {
            iCount++;
            first = first->next;
        }
    }

    return iCount;
}

void InsertFirst(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;


    if(*first == NULL)
    {
        *first = newn;
    }

    else
    {
        newn->next = *first;
        *first = newn;
    }
}

void InsertLast(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;


    if(*first == NULL)
    {
        *first = newn;
    }

    else
    {
        temp = *first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }
}

void InsertAtPos(PPNODE first, int iNo, int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    int iCount = 0;
    int i = 0;

    iCount = Count(*first);

    if(iPos < 1 || iPos > iCount+1)
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(first,iNo);
    }

    else if(iPos == iCount + 1)
    {
        InsertLast(first,iNo);
    }

    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = iNo;
        newn->next = NULL;

        temp = *first;

        for(i = 1; i < (iPos-1); i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        return;
    }

    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }

    else
    {
        temp = *first;

        *first = (*first)->next;

        free(temp);
    }
}

void DeleteLast(PPNODE first)
{   
    PNODE temp = NULL;

    if(*first == NULL)
    {
        return;
    }

    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }

    else
    {
        temp = *first;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        free(temp->next);

        temp->next = NULL;
    }
}

void DeleteAtPos(PPNODE first, int iPos)
{
    PNODE temp = NULL;
    PNODE target = NULL;

    int iCount = 0;
    int i = 0;

    iCount = Count(*first);

    if(iPos < 1 || iPos > iCount)
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(first);
    }

    else if(iPos == iCount)
    {
        DeleteLast(first);
    }

    else
    {
        temp = *first;

        for(i = 1; i < (iPos-1); i++)
        {
            temp = temp->next;
        }

        target = temp->next;

        temp->next = target->next;

        free(target);
    }
}

int CountEven(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        if(first->data % 2 == 0)
        {
            iCount++; 
        }

        first = first->next;
    }

    return iCount;
}

int main()
{
    PNODE head = NULL;

    int iRet = 0;

    InsertFirst(&head, 51);
    InsertFirst(&head, 22);
    InsertFirst(&head, 11);

    InsertLast(&head,110);
    InsertLast(&head,112);
    InsertLast(&head,121);

    iRet = CountEven(head);

    printf("Count of Even Numbers : %d\n",iRet);

    return 0;
}