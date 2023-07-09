#include<iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node * next;
    struct Node * prev;
}NODE, *PNODE;

class DoublyLL
{   
    private :
        PNODE First;            
        int iCount;

    public : 
        DoublyLL();
        ~DoublyLL();
        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int Pos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int Pos);
        void Display();
        int Count();
};

void DoublyLL :: InsertFirst(int No)
{
    PNODE newn = NULL;
    newn = new Node;
    
    newn -> data = No;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        First -> prev = newn;
        newn -> next = First;
        First = newn;
    }
    iCount ++;
}

void DoublyLL :: InsertLast(int No)
{
    PNODE newn = NULL;
    newn = new Node;
    PNODE temp = First;

    newn -> data = No;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        while(temp-> next !=NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
        newn -> prev = temp;
    }
    iCount++;
} 

void DoublyLL :: DeleteFirst()
{}
void DoublyLL :: DeleteLast()
{}
void DoublyLL :: DeleteAtPos(int Pos)
{}

void DoublyLL :: Display()
{   
    PNODE temp = First;
    cout<<"Doubly LL is : \n";
    cout<<"NULL <=>";
    while(temp != NULL)
    {
        cout<<"| "<<temp -> data<<"|<=>";
        temp = temp -> next;
    }
    cout<<"NULL\n";
}

int DoublyLL :: Count()
{
    return iCount;
}

void DoublyLL :: InsertAtPos(int No, int Pos)
{
    if((Pos < 1)  ||  (Pos > iCount+1))
    {
        cout<<"Invalid Position \n";
        return;
    }

    if(Pos ==1)
    {
        InsertFirst(No);
    }
    else if (Pos >iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        int iCnt = 0;
        PNODE temp = First;
        PNODE newn = NULL;
        for(iCnt = 1; iCnt < iCount +1; iCnt++)
        {
            temp = temp -> next;
        }

        
        newn -> data = No;
        newn -> next = NULL;
        newn -> prev = NULL;

        newn -> next = temp -> next;    
        temp -> next -> prev = newn;    
        temp -> next = newn;            
        newn -> prev = temp;            
    }
    iCount++;
}

DoublyLL:: DoublyLL()
{
    cout<<"Inside Constructor \n";
    First = NULL;
    iCount = 0;
}
DoublyLL:: ~DoublyLL()
{
    cout<<"Inside Destructor \n";
}
int main()
{
    DoublyLL obj;
    obj.InsertFirst(55);
    obj.InsertFirst(65);
    obj.InsertLast(95);
    obj.InsertAtPos(45,3);
    obj.Display();
    obj.Count();

    return 0;
}