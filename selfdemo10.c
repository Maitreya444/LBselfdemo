//In the frequency of numbers check wheater how many numbers are even.
#include <stdio.h>
typedef unsigned long int ULONG;
void Even(int iNo)
{    
     if(iNo < 0)
     {
          iNo = -iNo;
     }
     int iCnt = 0;
     for(iCnt = 1; iCnt <= iNo; iCnt++)
     {
          if(iCnt %2 ==0)
          {    
               printf("%d\n", iCnt);
          }
     }
}
int main()
{
     ULONG iValue = 0;
     printf("Enter a number \n");
     scanf("%d", &iValue);

     Even(iValue);

     return 0;
}