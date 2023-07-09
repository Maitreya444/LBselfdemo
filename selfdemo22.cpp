//Display Factors
#include <iostream>
using namespace std;
void DisplayFactor(int no)
{
     int iCnt = 0;
     for(iCnt =1; iCnt < no/2; iCnt++)
     {    
          if(no % iCnt ==0)
          {
               cout<<iCnt<<"\n";
          }
     }
}
int main()
{
     int iNo = 0;
     cout<<"Enter a number \n";
     cin>>iNo;

     DisplayFactor(iNo);
     return 0;
}