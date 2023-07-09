//Write a program which accept number from user and print that number of $  &  * on screen.
//Input : 3
//Output: $ & * $ & * $ & *  
#include<iostream>
using namespace std;
void Pattern(int iNo)
{   
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt = 0; iCnt <=iNo; iCnt++)
    {
        cout<<"$   &   *   ";
    }
}
int main()
{
    int iValue = 0;
    cout<<"Enter a number"<<"\n";
    cin>>iValue;
    Pattern(iValue);
    return 0;
}