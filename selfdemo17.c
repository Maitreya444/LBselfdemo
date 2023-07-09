//Sum of the factors
#include<stdio.h>
typedef unsigned long int ULONG;
int SumFactors(int iValue)
{    
     if(iValue < 0)
     {
          iValue = -iValue;
     }
     int iCnt = 0;
     ULONG Sum = 0;
     for(iCnt = 2; iCnt<=iValue/2; iCnt++)
     {
          if((iValue % iCnt)==0)
          {    
               printf("%d\n", iCnt);
               Sum = Sum+iCnt;
          }
     }
     return Sum;
}
int main()
{
     ULONG iNo = 0;
     int iRet =0;
     printf("Enter a number \n");
     scanf("%d", &iNo);

     iRet = SumFactors(iNo);
     printf("summation is %d\n", iRet);
     return 0;
}