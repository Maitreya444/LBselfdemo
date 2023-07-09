//Accept number from user nad check wheather ity is even or odd
#include<iostream>
using namespace std;
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL EvenOdd(int iNo)
{
    if((iNo %2)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    cout<<"Enter a number \n";
    cin>>iValue;
    
    bRet = EvenOdd(iValue);

    if(bRet == 1)
    {
        cout<<"It is an EVEN Number\n";
    }
    else
    {
        cout<<"It is an ODD number\n";
    }
    return 0;
}