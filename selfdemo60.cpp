//Accept one number from user check wheather it is divisible by 5 or not
#include<iostream>
using namespace std;
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkDivide(int iNo)
{
    if((iNo % 5) ==0)
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

    cout<<"Enter number"<<"\n";
    cin>>iValue;
    
    bRet = ChkDivide(iValue);

    if(bRet == 1)
    {
        cout<<"It is divisible by 5";
    }
    else
    {
        cout<<"It is not divisible by 5";
    }
    return 0;
}