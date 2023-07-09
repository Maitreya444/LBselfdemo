#include<iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node * next;
}NODE, *PNODE;

class SinglyLL
{
    private:
    PNODE First;
    int iCount;

    public:
    SinglyLL();
    ~SinglyLL();

    void InsertFirst(int No);
    void InsertLast(int No);
    void InsertAtPos(int No, int Pos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int Pos);
    void Display();
    int Count();
};

void SinglyLL :: InsertFirst(int No)
{
    PNODE newn = NULL;
    
    newn = new NODE;

    newn -> data = No;
    newn -> next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn -> next = First;
        First = newn;
    }
    iCount ++;
}
void SinglyLL :: InsertLast(int No)
{
    PNODE newn = NULL;
    
    newn = new NODE;

    newn -> data = No;
    newn -> next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        PNODE temp = First;

        while(temp -> next !=NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
    iCount++;
}

void SinglyLL :: DeleteFirst()
{
    if(First == NULL)
    {
        return;
    }
    else if (First -> next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {   
        PNODE temp = First;
        First = First -> next;
        delete temp ;      
    }
    iCount --;
}
void SinglyLL :: DeleteLast()
{

    if(First == NULL)
    {
        return;
    }
    else if (First -> next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {   
        PNODE temp = First;
        while(temp -> next -> next !=NULL)
        {
            temp = temp -> next;
        }
        delete temp -> next;
        temp -> next = NULL;
    }
    iCount --;
}

void SinglyLL :: Display()
{
    cout<<"Linked List is : \n";
    while(First != NULL)
    {
        cout<<"| "<<First -> data<<"|->";
        First = First -> next;
    }
    cout<<"NULL \n";
}

int SinglyLL :: Count()
{
    return iCount;
}
void SinglyLL :: InsertAtPos(int No, int Pos)
{   
    if((Pos < 1)|| (Pos >iCount+1))
    {
        printf("Invalid Position\n");
        return;
    }
    if(Pos ==1)
    {
        InsertFirst(No);
    }
    else if (Pos == iCount+1)
    {
        InsertLast(No);
    }
    else
    {   
        PNODE temp = First;
        int iCnt = 0;
        for(iCnt =1 ; iCnt < Pos-1; iCnt++)
        {
            temp = temp -> next;
        }
        PNODE newn = new NODE;
        newn -> data =No;
        newn -> next = NULL;
        newn -> next = temp -> next; 
        temp -> next = newn;
    }
    iCount++;
}

void SinglyLL :: DeleteAtPos(int Pos)
{   
    if((Pos < 1)|| (Pos >iCount))
    {
        printf("Invalid Position\n");
        return;
    }
    if(Pos ==1)
    {
        DeleteFirst();
    }
    else if (Pos == iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = First;
        PNODE tempX = NULL;
        int iCnt = 0;
        for(iCnt =1 ; iCnt < Pos-1; iCnt++)
        {
            temp = temp -> next;
        }
        PNODE newn = new NODE;
        tempX = temp -> next;
        temp -> next = temp->next->next;

        delete tempX;

        iCount--;
    }
}

SinglyLL:: SinglyLL()
{
    cout<<"Inside constructor\n";

    First = NULL;
    iCount = 0;
}
SinglyLL:: ~SinglyLL()
{
    cout<<"Inside Destructror \n";
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    SinglyLL obj;
    obj.InsertFirst(104);
    obj.InsertFirst(103);
    obj.InsertFirst(102);
    obj.InsertFirst(101);
    obj.InsertLast(105);  
    obj.InsertAtPos(555,2); 
    obj.DeleteFirst();
    obj.DeleteLast();
    obj.DeleteAtPos(2);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are :"<<iRet<<"\n";

    return 0;
}