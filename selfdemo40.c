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
    newn=(PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head= newn;
    }
}
void InsertLast(PPNODE Head, int No)
{      
    PNODE newn = NULL;
    PNODE temp = *Head;
    newn=(PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = *Head;

    if(*Head ==NULL)
    {
        *Head = newn;
    }
    else
    {
        while(temp -> next != NULL)
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
void Display()
{}
int Count()
{}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 101);
    InsertFirst(&First, 111);
    InsertFirst(&First, 121);
    InsertFirst(&First, 131);

    InsertLast(&First, 171);
    InsertLast(&First, 181);

    return 0;
}