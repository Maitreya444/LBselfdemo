#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node * next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
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
void InsertLast(PPNODE Head, int No)
{}
void InsertAtPos(PPNODE Head, int No, int Pos)
{}
void DeleteFirst(PPNODE Head, int No)
{}
void DeleteLast(PPNODE Head, int No)
{}
void DeleteAtPos(PPNODE Head, int No, int Pos)
{}
void Display(PNODE Head)
{}
int Count(PNODE Head)
{
    return 0;
}

int main()
{
    PNODE First = NULL; 

    InsertFirst(&First, 101);
    InsertFirst(&First, 111);
    InsertFirst(&First, 121);
    InsertFirst(&First, 131);

    return 0;
}