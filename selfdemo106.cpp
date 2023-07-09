//Write a program which accept that number and print til that number.
// Input :  8
// Output:  1   2   3   4   5   6   7   8   
#include <iostream>
using namespace std;
void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
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