#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> next =  *Head;
        *Head = newn;
    }
}
void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(temp -> next !=NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
}
void InsertAtPos()
{}
void DeleteFirst()
{}
void DeleteLast()
{}
void DeleteAtLast()
{}
void Display(PNODE Head)
{
    printf("Elements are linkedlist are : \n");

    while(Head !=NULL)
    {
        printf("%d  ->", Head -> data);
        Head = Head -> next;
    }
    printf("NULL");
}
int Count()
{
    return 0;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 131);
    InsertFirst(&First, 121);
    InsertFirst(&First, 111);
    InsertFirst(&First, 101);

    InsertLast(&First, 181);
    InsertLast(&First, 171);

    Display(First);

    return 0;
}