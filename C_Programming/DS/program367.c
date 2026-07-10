#include<stdio.h>
#include<stdlib.h>

struct Node             // Structure Definition
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

/*---------------------------------------------------------
 Old Name New Name
 ----------------------------------------------------------
 struct Node NODE
 struct Node * PNODE
 struct Node ** PPNODE
 ----------------------------------------------------------*/

///////////////////////////////////////////////////////////////////
//
// Function name : InsertFirst
// Description : Used to insert at first position of Linked List
// Parameters : Addreass of First pointer & data of node
// Return Value : void
//
///////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE Head,int no)
{

    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn -> data = no;
    newn -> next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;    
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }

}

void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE)); // Allocate memory
    newn-> data = no; // Iniitialise data
    newn-> next = NULL; // Initialise pointer

    if(*Head == NULL) // Linkedlist is empty
    {
        *Head = newn;
    }
    else // LL contains atleast one node
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp -> next = newn;
    }
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("%d\t",Head -> data);
        Head = Head -> next;
    }
}

int Count(PNODE Head)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        iCnt++;
        Head = Head -> next;
    }

    return iCnt;
}

int main()
{
    int iRet = 0;

    PNODE First = NULL;
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    Display(First);

    iRet = Count(First);

    printf("\nNumber of elements are %d : \n",iRet);

    InsertLast(&First,101);
    InsertLast(&First,111);

    Display(First);
    return 0;

    return 0;
}