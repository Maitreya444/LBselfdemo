//Write a program which accept a number from user and return summation of its non factors
//Input : 12
//Output: 50
#include<iostream>
using namespace std;
int SumNonFactors(int iNo)
{
    int iCnt = 0;
    int Add = 0;
    for(iCnt = 1; iCnt < iNo; iCnt ++)
    {
        if((iNo % iCnt)!=0)
        {
            cout<<iCnt<<"\n";
            Add = Add + iCnt;
        }
    }
    return Add;
}
int main()
{
    int iValue = 0;
    int iRet =0;
    cout<<"Enter a value"<<"\n";
    cin>>iValue;
    iRet = SumNonFactors(iValue);

    cout<<"Summation of Non Factors is "<<iRet<<"\n";
    return 0;
}