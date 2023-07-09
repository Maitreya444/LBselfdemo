#include<iostream>
using namespace std;

typedef class node
{
    public:
    int data;
    node *next;
    node *prev;

    node()
    {
        data = 0;
        next = NULL;
        prev = NULL;
    }
    node (int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
}NODE, *PNODE;

class LinkedList
{
    public:
    PNODE First;
    int iCount;

    LinkedList()
    {
        First = NULL;
        iCount = 0;
    }

    virtual void InsertFirst(int ino)= 0;
    virtual void InsertLast(int ino) = 0;
    virtual void InsertAtPos(int ino, int ipos) = 0;

    virtual void DeleteFirst() = 0;
    virtual void DeleteLast() = 0;
    virtual void DeleteAtPos(int ipos) = 0;

    void Display()
    {
        PNODE temp = First;

        cout<<"Elements of Linked List are "<<"\n";

        while(temp != NULL)
        {
            cout<<"| "<<temp -> data<<" |->";
            temp = temp -> next;
        }
        cout<<"NULL"<<"\n";
    }
    int Count()
    {
        return iCount;
    }
};

class SDoubly : public LinkedList
{
    private:
    PNODE Last;

    public:
    SDoubly();
    ~SDoubly();

    void InsertFirst(int ino);
    void InsertLast(int ino);
    void InsertAtPos(int ino, int ipos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int ipos);
};

SDoubly::SDoubly()
{
    Last = NULL;
}
SDoubly :: ~SDoubly()
{}

void SDoubly :: InsertFirst(int no)
{
    PNODE newn = new NODE (no);

    if(First == NULL && Last == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        First -> prev = newn;
        newn -> next = First;
        First = newn;
    }
    iCount ++;
}
void SDoubly :: InsertLast(int no)
{
    PNODE newn = new NODE (no);
    PNODE temp = First;
    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {   
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
        newn -> prev = temp;   
    }
}

void SDoubly :: DeleteFirst()
{
    if((First == NULL) && (Last == NULL))
    {
        return;
    }
    else if (First -> next == NULL)
    {
        delete (First -> next);
        First = NULL;
    }
    else
    {
        First = First -> next;
        delete Last -> next;
    }
}

void SDoubly :: DeleteLast()
{
    if((First == NULL) && (Last == NULL))
    {
        return;
    }
    else if (First == NULL)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        PNODE temp = First;
        while(temp -> next != NULL)
        {
            temp = temp ->next;
        }
        delete(temp -> next);
        temp -> next = NULL; //this was my logic

        /*Last = Last -> prev; // sir ch logic
        delete Last -> next;

        First -> prev = Last;
        Last -> next = First;*/
        
        
    }
}

void SDoubly :: InsertAtPos(int ino, int ipos)
{   
    int iLength = 0;
    iLength = Count();
    PNODE temp = First;
    PNODE newn = new NODE;

    if((ipos <1 )||(ipos > iLength+1))
    {   
        cout<<"Invalid position \n";
        return;
    }
    if (ipos == 1)
    {
        InsertFirst(ino);
    }
    else if (ipos == iLength+1)
    {
        InsertLast(ino);
    }
    else
    {
        for(int iCnt = 1; iCnt < ipos -1; iCnt ++)
        {
            temp = temp -> next; 
        }
        newn->next = temp->next;
        temp -> next -> prev = newn;

        temp->next = newn;
        newn->prev = temp;
    }
}

void SDoubly :: DeleteAtPos(int ipos)
{
    int iLength = Count();
    PNODE temp = First;
    int iCnt = 0;

    if((ipos < 1)|| (ipos > iLength))
    {
        printf("Invalid postion\n");
        return;
    }
    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if (ipos == iLength)
    {
        DeleteLast();
    }
    else
    {
        for(int iCnt = 1; iCnt < ipos -1; iCnt ++)
        {
            temp -> next -> next;
        }
        temp -> next = temp -> next -> next;
        delete(temp -> next -> prev);
        temp -> next -> next = temp;
    }
}

int main()
{
    SDoubly obj;
    obj.InsertAtPos(3,3);
    obj.InsertLast(99);
    obj.InsertFirst(51);
    obj.InsertFirst(61);
    obj.InsertFirst(71);
    obj.InsertFirst(81);
    obj.DeleteFirst();
    //obj.DeleteLast();
    //obj.DeleteAtPos(3);
    obj.Display();

    return 0;
}