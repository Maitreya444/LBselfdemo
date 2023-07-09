//Write a program which accept number from user and display its factor in decreasing order.
//Input :   12
//Output:   6   4   3   2   1
#include<iostream>
using namespace std;
void Factors(int iNo)
{   
    int Show = 1;
    int iCnt = 0;
    for(iCnt = iNo/2; iCnt <=iNo; iCnt--)
    {
        if((iNo % iCnt)==0)
        {
            cout<<iCnt<<"\n";
            Show = Show + iCnt;
        }
    }
}
int main()
{
    int iValue = 0;
    cout<<"Enter a Number"<<"\n";
    cin>>iValue;
    Factors(iValue);

    return 0;
}