#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE , *PNODE, **PPNODE;

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
void DeleteFirst(PPNODE Head)
{   
    PNODE temp = *Head;
    
    if(*Head == NULL)               // LL is empty           
    {
        return;
    }
    else if((*Head) -> next == NULL)    // LL contains 1 node
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
    
    if(*Head == NULL)               // LL is empty           
    {
        return;
    }
    else if((*Head) -> next == NULL)    // LL contains 1 node
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        
    }
}
void DeleteAtPos()
{}
void Display(PNODE Head)
{
    printf("Linked List is : \n");
    while(Head !=NULL)
    {
        printf("|%d |->", Head -> data);
        Head = Head -> next;
    }
    printf("|NULL |");
}
int Count(PNODE Head)
{
    int iCount = 0;
    while(Head != NULL)
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

    InsertFirst(&First, 11);
    InsertFirst(&First, 21);
    InsertFirst(&First, 31);

    InsertLast(&First, 51);
    InsertLast(&First, 61);



    Display(First);
    iRet = Count(First);
    printf("\nNo of nodes is %d", iRet); 

    DeleteFirst(&First);  
    Display(First);
    iRet = Count(First);
    printf("\nNo of nodes is %d", iRet); 
    return 0;
}