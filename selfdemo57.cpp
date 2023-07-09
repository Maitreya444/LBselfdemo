//Program to print 5 to 1 numbers on screen
#include<iostream>
using namespace std;
void Display()
{
    int iCnt =5;
    for(int iCnt = 5; iCnt>=0; iCnt--)
    {
        cout<<iCnt<<"\n";      
    }
}
int main()
{ 
    Display();
    return 0;
}