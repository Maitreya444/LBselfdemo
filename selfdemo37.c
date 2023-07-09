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
        (*Head) -> prev = newn;
        newn -> next = *Head;
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
    newn -> prev = NULL;

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
        newn -> prev = temp;
    }
}

void DeleteFirst(PPNODE Head)
{
    if(*Head == NULL)
    {
        return;
    }
    else if ((*Head) -> next ==NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        *Head = (*Head) -> next;
        free((*Head)-> prev);
        ((*Head) -> prev)= NULL;
    }
}
void DeleteLast(PPNODE Head)
{   
    PNODE temp = *Head;
    if(*Head == NULL)
    {
        return;
    }
    else if ((*Head) -> next ==NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        while(temp -> next -> next !=NULL)
        {
            temp = temp -> next;
        }
        free(temp -> next);
        temp -> next = NULL;
    }
}
void Display(PNODE Head)
{
    printf("Linked List is :\n");
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
    while(Head !=NULL)
    {
        iCount ++;
        Head = Head -> next;
    }
    return iCount;
}

void InsertAtPos(PPNODE Head, int No, int Pos)
{
    int iLength = 0;
    PNODE newn = NULL;

    iLength = Count(*Head);

    int iCnt = 0;
    PNODE temp = *Head;

    if((Pos< 1) || (Pos > iLength +1))
    {
        printf("Invalid \n");
        return;
    }
    if (Pos ==1)
    {
        InsertFirst (Head, No);
    }
    else if ( Pos == iLength +1)
    {
        InsertLast(Head, No);
    }
    else
    {   
        for(iCnt = 1; iCnt < Pos-1; iCnt++)
        {
            temp = temp -> next;
        }
        
        newn = (PNODE)malloc(sizeof(NODE));

        newn -> data = No;
        newn -> next = NULL;
        newn -> prev = NULL;

        newn -> next = temp -> next;    //1
        temp -> next -> prev = newn;    //2
        temp -> next = newn;            //3
        newn -> prev = temp;            //4
    }
}
void DeleteAtPos(PPNODE Head, int Pos)
{
    int iLength = 0;
    iLength = Count(*Head);

    int iCnt = 0;
    PNODE temp = *Head;

    if((Pos < 1) || (Pos > iLength))
    {
        printf("Invalid position\n");
        return;
    }

    if(Pos == 1)
    {
        DeleteFirst(Head);
    }
    else if(Pos == iLength)
    {
        DeleteLast(Head);
    }
    else
    {
        for(iCnt = 1; iCnt < Pos-1; iCnt++)
        {
            temp = temp -> next;
        }
        temp -> next = temp -> next -> next;
        free(temp -> next -> prev);
        temp -> next -> prev = temp;
    }
}
int main()
{   
    PNODE First = NULL;

    int iRet = 0;

    InsertFirst(&First, 115);
    InsertFirst(&First, 112);
    InsertFirst(&First, 111);
    Display(First);
    iRet = Count(First);
    printf("\nNumber of elements in Linked List is %d\n:", iRet);

    InsertLast(&First, 696);
    Display(First);
    iRet = Count(First);
    printf("\nNumber of elements in Linked List is %d\n:", iRet);

    InsertAtPos(&First, 1000, 3);
    Display(First);
    iRet = Count(First);
    printf("\nNumber of elements in Linked List is %d\n:", iRet);

    DeleteAtPos(&First, 3);
    Display(First);
    iRet = Count(First);
    printf("\nNumber of elements in Linked List is %d\n:", iRet);

    DeleteFirst(&First);
    Display(First);
    iRet = Count(First);
    printf("\nNumber of elements in Linked List is %d\n:", iRet);

    DeleteLast(&First);
    Display(First);
    iRet = Count(First);
    printf("\nNumber of elements in Linked List is %d\n:", iRet);

    return 0;
}
