//Write a program which accept one number from user and check wheather that number is greater tham 100 or not.
//Input : 101
//Output : Greater
#include <iostream>
using namespace std;
typedef int BOOL;
#define TRUE 1;
#define FALSE 0;
BOOL ChkGreater(int iNo)
{
    if(iNo > 100)
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
    cout<<"Enter a number"<<"\n";
    cin>>iValue;

    bRet = ChkGreater(iValue);

    if(bRet == 1)
    {
        cout<<"Greater"<<"\n";
    }
    else
    {
        cout<<"Smaller"<<"\n";
    }
    return 0;
}