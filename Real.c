#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node * next;
}NODE, *PNODE ,**PPNODE;

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
{   
    PNODE temp = *Head;
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
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn; 
    }

}

void DeleteFirst(PPNODE Head)
{   
    PNODE temp = *Head;
    if(*Head == NULL)
    {
        return;
    }
    else if ((*Head) -> next == NULL)
    {
        free (*Head);
        *Head = NULL;
    }
    else
    {
      *Head = (*Head) -> next;
        free(temp);
    }
}
void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)
    {
        return;
    }
    else if ((*Head) -> next == NULL)
    {
        free (*Head);
        *Head = NULL;
    }
    else
    {
        while(temp -> next -> next!= NULL)
        {
            temp = temp -> next;
        }
        free(temp -> next);
        temp -> next =NULL;
    }
}

void Display(PNODE Head)
{
    printf("Linked List is : \n");
    while(Head != NULL)
    {
        printf("|%d | ->", Head -> data);
        Head = Head -> next;
    }
    printf("NULL\n");
}
int Count(PNODE Head)
{   
    int iCount = 0;
    while(Head !=NULL)
    {   
        iCount++;
        Head = Head -> next;
    }
    return iCount;
}
void InsertAtPos(PPNODE Head , int No, int Pos)
{
    int iLength = 0;
    iLength = Count(*Head);
    int iCnt = 0;

    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = *Head;

    newn -> data = No;
    newn -> next = NULL;

    if((Pos < 1) || (Pos > iLength+1))
    {
        printf("Invalid Position \n");
        return;
    }
    if (Pos == 1)
    {
        InsertFirst(Head, No);
    }
    else if (Pos == iLength+1)
    {
        InsertLast(Head, No);
    }   
    else
    {
        for(iCnt = 1; iCnt < Pos -1; iCnt ++)
        {
            temp = temp -> next;
        }
            newn -> next = temp -> next;
            temp -> next = newn;
    }
}

void DeleteAtPos(PPNODE Head, int Pos)
{
    int iLength = 0;
    iLength = Count(*Head);
    int iCnt = 0;
    PNODE tempX = NULL;
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = *Head;

    newn -> next = NULL;

    if((Pos < 1) || (Pos > iLength))
    {
        printf("Invalid Position \n");
        return;
    }
    if (Pos == 1)
    {
        DeleteFirst(Head);
    }
    else if (Pos == iLength)
    {
        DeleteLast(Head);
    }   
    else
    {
        for(iCnt = 1; iCnt < Pos -1; iCnt ++)
        {
            temp = temp -> next;
        }
        tempX = temp -> next;
        temp -> next = temp -> next -> next;
        free(tempX);
    }
}

int main()
{   
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 90);
    InsertFirst(&First, 80);
    InsertFirst(&First, 70);
    InsertFirst(&First, 60);
    InsertLast(&First, 100);

    InsertAtPos(&First, 55, 3);
    Display(First);
    iRet = Count(First);
    printf("Nodes in linked list are :%d\n", iRet);
    
    DeleteAtPos(&First, 3);
    DeleteFirst(&First);
    DeleteLast(&First);

    Display(First);
    iRet = Count(First);

    printf("Nodes in linked list are :%d\n", iRet);
    return 0;
}