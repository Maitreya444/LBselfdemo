//Write a program which accept two numbers and check whetaher numbers are equal or not.
//Input : 10    10
//Output: Equal
#include<iostream>
using namespace std;
void ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        cout<<"Equal";
    }
    else
    {
        cout<<"Not Equal";
    }
}
int main()
{
    int iValue1 =0;
    int iValue2 =0;
    cout<<"Enter number 1"<<"\n";
    cin>>iValue1;
    cout<<"Enter number 2"<<"\n";
    cin>>iValue2;

    ChkEqual(iValue1, iValue2);
    return 0;
}