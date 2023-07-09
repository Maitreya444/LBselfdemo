//Write a program which accept 3 numbers and print its multiplication
//Input :   5   4   7
//Output:   140
#include<iostream>
using namespace std;
int Multiply(int iNo1, int iNo2, int iNo3)
{
    if((iNo1 || iNo2 || iNo3)==0)
    {   
        cout<<"Please enter +ve value";
        return -1;
    }
    int Ans = 0;
    Ans = iNo1 * iNo2 * iNo3;
    return Ans;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;
    cout<<"Enter a number 1"<<"\n";
    cin>>iValue1;
    cout<<"Enter a number 2 "<<"\n";
    cin>>iValue2;
    cout<<"Enter a number 3"<<"\n";
    cin>>iValue3;

    iRet = Multiply(iValue1, iValue2, iValue3);
    cout<<"Multiplication is"<<iRet<<"\n";
    return 0;
}