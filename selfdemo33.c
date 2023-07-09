//Doubly Linked List
#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;          //#
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;
    newn -> prev = NULL;        //#

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        (*Head) -> prev = newn;
        newn -> next = *Head;
        *Head = newn;
    }
}
void InsertLast()
{}
void InsertAtPos()
{}
void DeleteFirst()
{}
void DeleteLast()
{}
void DeleteAtPos()
{}
void Display()
{}
void Count()
{}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    return 0;
}