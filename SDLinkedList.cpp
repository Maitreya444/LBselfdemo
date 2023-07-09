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
    private:
    PNODE First;
    PNODE Last;
    int iCount;

    public:
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
    PNODE newn = new NODE;

    newn -> data = No;
    newn -> next = NULL;
    newn -> prev = NULL;

}
void DoublyLL :: InsertLast(int No)
{}
void DoublyLL ::InsertAtPos(int No, int Pos)
{}
void DoublyLL :: DeleteFirst()
{}
void DoublyLL :: DeleteLast()
{}
void DoublyLL ::DeleteAtPos(int Pos)
{}
void DoublyLL ::Display()
{}
int DoublyLL :: Count()
{}
DoublyLL:: DoublyLL()
{
    cout<<"Inside constructor\n";

    First = NULL;
    Last = NULL;
    iCount = 0;
}
DoublyLL:: ~DoublyLL()
{
    cout<<"Inside Destructror \n";
}


int main()
{   
    PNODE First = NULL;
    PNODE Last = NULL;

    DoublyLL obj;
}