//Sum of the factors
#include<stdio.h>
int SumFactors(int iValue)
{
     int iCnt = 0;
     int Sum = 0;
     for(iCnt = 1; iCnt<=iValue; iCnt++)
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
     int iNo = 0;
     int iRet =0;
     printf("Enter a number \n");
     scanf("%d", &iNo);

     iRet = SumFactors(iNo);
     printf("summation is %d\n", iRet);
     return 0;
}