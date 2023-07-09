#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node * next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
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
    newn = (PNODE)malloc(sizeof(NODE));

    PNODE temp = NULL;
    newn -> data = no;
    newn -> next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while (temp -> next !=NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
}
void InsertAtPos()
{}
void Display(PNODE Head)
{
    printf("Elements of linked lists are : \n");

    while(Head != NULL)
    {
        printf("|%d| -> ", Head -> data);
        Head = Head -> next;
    }
    printf("NULL \n");
}
int Count(PNODE Head)
{   
    int iCount =0;
    while(Head != NULL)
    {
        iCount ++;
        Head = Head -> next;
    }
    return iCount ;
}
void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)
    {
        return ;
    }
    else if ((*Head)-> next ==NULL)
    {
        free(*Head);
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
        return ;
    }
    else if ((*Head)-> next ==NULL)
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
        free (temp -> next);
        temp -> next = NULL;
    }
}
void DeleteAtPos()
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

    DeleteFirst(&First);
    DeleteLast(&First);
    
    return 0;
}