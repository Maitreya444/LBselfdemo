//Write a program which accpet number from user and display its multiplication of its factors.
//Input :  12
//Output : 144  (1*2*3*4*6)

#include<iostream>
using namespace std;
int MultFact(int iNo)
{
    int iCnt = 0;
    int Add = 1;
    for(iCnt = 2; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            cout<<iCnt<<"\n";
            Add = Add * iCnt;
        }
    }
    return Add;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter Number"<<"\n";
    cin>>iValue;

    iRet = MultFact(iValue);

    cout<<"Multiplication of factors is :"<<iRet<<"\n";

    return 0;
}