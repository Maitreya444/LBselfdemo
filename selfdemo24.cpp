//SumFactors
#include<iostream>
using namespace std;
int SumFactors(int no)
{
     int iCnt = 0;
     int iSum = 0;

     for(iCnt = 1; iCnt <= no; iCnt ++)
     {
          if(no % iCnt ==0)
          {
               iSum = iSum + iCnt;
               cout<<iCnt<<"\n";
          }
     }
     return iSum;
}
int main()
{
     int iNo = 0;
     int iRet = 0;

     cout<<"Enter a number"<<"\n";
     cin>>iNo;

     iRet = SumFactors(iNo);

     cout<<"Summation is :"<<iRet;
     return 0;
}