//Accept two numbers from user and display first number in second number of times.
// Input : 12   5
//Output : 12   12  12  12  12
#include<iostream>
using namespace std;
void Display(int iNo1, int iNo2)
{
    int iCnt =0;
    for(iCnt = 1; iCnt <=iNo1; iCnt++)
    {
        cout<<iNo2;
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    cout<<"Enter number\n";
    cin>>iValue;

    cout<<"Enter number of times you want to display it\n";
    cin>>iCount;

    Display(iCount, iValue);
    return 0;
}   