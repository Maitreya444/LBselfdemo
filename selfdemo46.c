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

void DeleteFirst(PPNODE Head)
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
        *Head = (*Head )-> next;
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
    printf("Linked List is : \n");
    while(Head !=NULL)
    {
        printf("|%d |-> ", Head -> data);
        Head = Head -> next;
    }
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
void InsertAtPos(PPNODE Head, int No, int Pos)
{
    int iLength = 0;
    iLength = Count(*Head); //Count navacha function la call kela.

    PNODE newn = NULL;
    int iCnt = 0;
    PNODE temp =*Head;

    //Filter
    {
        if((Pos <1) || (Pos >iLength +1))
        {
            printf("Invalid Position \n");
            return;
        }
        if(Pos == 1)
        {
            InsertFirst(Head, No);
        }
        else if(Pos == iLength +1)
        {
            InsertLast(Head, No);
        }
        else
        {
            newn = (PNODE)malloc(sizeof(NODE));
            newn -> data = No;
            newn -> next = NULL;

            for(iCnt =1 ; iCnt < Pos-1; iCnt ++)
            {
                temp = temp -> next;
            }
            //Sequence is important
            newn -> next = temp -> next;        //right side joda
            temp -> next = newn;                //left side joda
        }
    }
}

void DeleteAtPos(PPNODE Head, int Pos)
{
    int iLength = 0;
    PNODE tempX = NULL;
    iLength = Count(*Head); //Count navacha function la call kela.

    PNODE newn = NULL;
    int iCnt = 0;
    PNODE temp =*Head;

    //Filter
    {
        if((Pos <1) || (Pos >iLength ))
        {
            printf("Invalid Position \n");
            return;
        }
        if(Pos == 1)
        {
            DeleteFirst(Head);
        }
        else if(Pos == iLength )
        {
            DeleteLast(Head);
        }
        else
        {
            for(iCnt =1; iCnt < Pos ; iCnt ++)
            {
                temp = temp ->next;
            }
            tempX = temp -> next;
        }
        temp -> next = temp -> next ->next;
        free(tempX);
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 11);
    InsertFirst(&First, 21);
    InsertFirst(&First, 31);

    InsertLast(&First, 88);
    InsertLast(&First, 69);

    Display(First);
    iRet = Count(First);
    printf("\nNo of nodes is %d\n", iRet);  

    DeleteFirst(&First);
    Display(First);
    iRet = Count(First);
    printf("\nNo of nodes is %d\n", iRet); 

    InsertAtPos(&First , 99, 3);
    Display(First);
    iRet = Count(First);
    printf("\nNo of nodes is %d\n", iRet); 

    DeleteAtPos(&First, 3);
    Display(First);
    iRet = Count(First);
    printf("\nNo of nodes is %d\n", iRet);     

    return 0;
}