//Write a program which accept number from user and print its number line.
//Input : 4
//Output: -4  -3  -2  -1   0   1   2   3   4
#include<iostream>
using namespace std;
void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = -iNo; iCnt <=iNo; iCnt++)
    {
        cout<<iCnt<<"\t";
    }
}
int main()
{
    int iValue = 0;
    cout<<"Enter a number"<<"\n";
    cin>>iValue;
    Display(iValue);

    return 0;
}