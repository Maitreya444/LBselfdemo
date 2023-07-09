//Write a program which accept number from user and display its digits in reverse.
//Input : 2395
//Output : 5932
#include<iostream>
using namespace std;
void Display(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;
    if(iNo<0)
    {
      iNo = -iNo;
    }
    while(iNo !=0)
    {
        iDigit = iNo % 10;
        cout<<iDigit;
        iNo = iNo /10;
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