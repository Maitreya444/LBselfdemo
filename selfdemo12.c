//In the frequency of numbers check wheater how many numbers are even and odd.
#include<stdio.h>
int OddEven(int iNo)
{
     int iCnt = 0;
     for(iCnt = 1; iCnt <=iNo; iCnt++)
     {    
          if(iCnt %2 ==0)
          {
               printf("%d\n", iCnt);
          }
     }
     return iNo;
}
int main()
{
     int iValue = 0;
     int iRet = 0;
     printf("Enter a number \n");
     scanf("%d", &iValue);

     iRet = OddEven(iValue);
     printf("Even numbers are %d\n", iRet);
     return 0;
}
