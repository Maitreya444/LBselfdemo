//Program to print 5 to 1 numbers on screen
#include<stdio.h>
void Display()
{
    int iCnt =5;
    for(int iCnt = 5; iCnt>=0; iCnt--)
    {
        printf("%d\n", iCnt);      
    }
}
int main()
{ 
    Display();
    return 0;
}