//Check Perfect 
#include<iostream>
#include<stdbool.h>
using namespace std;
bool CheckPerfect (int no)
{
     int iCnt = 0;
     int iSum = 0;

     for(iCnt = 1; iCnt < no/2; iCnt++)
     {
          if(no % iCnt ==0)
          {
               iSum = iSum + iCnt;
          }
          if(iSum > no)
          {
               break;
          }
     }
     if(iSum == no)
     {
          return true;
     }
     else
     {
          return false;
     }
}
int main()
{
     int iNo = 0;
     bool bRet = false;

     cout<<"Enter a number \n";
     cin>>iNo;

     bRet = CheckPerfect(iNo);

     if(bRet == true)
     {
          cout<<"The number is perfect number"<<bRet<<"\n";
     }
     else
     {
          cout<<"The number is not a perfect number"<<bRet<<"\n";
     }
     return 0;
}