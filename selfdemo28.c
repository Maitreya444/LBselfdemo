#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int Data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void Display(PNODE Head)
{
    printf("Elements of linked list are : \n");

    while(Head != NULL)
    {
        printf("|%d| ->", Head -> Data);
        Head = Head -> next;
    }
    printf("NULL\n");
}
int Count(PNODE Head)
{
    int iCnt = 0;

    while(Head !=NULL)
    {
        iCnt ++;
        Head = Head -> next;
    }
    return iCnt;
}
void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> Data = No;
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
void InsertPos()
{}
void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> Data = No;
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
void DeleteFirst()
{}
void DeletePos()
{}
void DeleteLast()
{}
int main()
{   
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 10);
    InsertFirst(&First, 20);
    InsertFirst(&First, 30);
    InsertFirst(&First, 40);

    Display(First);
    
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);
    
    InsertLast(&First,121);
    InsertLast(&First,151);

    Display(First);
    
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);
    
    return 0;
}