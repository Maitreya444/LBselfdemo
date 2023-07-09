#include<stdio.h>
#include<stdlib.h>

typedef struct Node 
{
    int data;
    struct Node *next;
    struct Node *prev;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        (*Head)-> prev = newn;
        newn -> next = *Head;
        *Head = newn;
    }
}
void InsertLast()
{}
void Display(PNODE Head)
{
    printf("Linked List is : \n");
    printf("NULL <=>");
    while(Head !=NULL)
    {
        printf("|%d |<=> ", Head -> data);
        Head = Head -> next;
    }
    printf("NULL\n");
}
int Count(PNODE Head)
{
    int iCount =0;
    while(Head !=NULL);
    {
        iCount ++;
        Head = Head -> next;
    }
    return iCount;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    Display(First);
    iRet = Count(First);
    printf("Number of elements in Linked List is %d:", iRet);

    return 0;
}