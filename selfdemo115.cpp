//Write a program which accpet N and print first 5 numbers of N
//Input : 4
//Output: 4  8  12  16  20
#include<iostream>
using namespace std;
void Display(int iNo)
{
    int iCnt = 0;
    int Ans = 1;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        cout<<iNo * iCnt<<"\t";
    }
}
int main()
{
    int iValue = 0;
    cout<<"Enter a number \n";
    cin>>iValue;
    Display(iValue);
    return 0;
}