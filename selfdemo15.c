//Factors of the number improved
#include<stdio.h>
typedef unsigned int long ULONG;
int Display(int iValue)
{    
     if(iValue < 0)
     {
          iValue = -iValue;
     }
     int iCnt = 0;
     for (iCnt = 2; iCnt<=iValue/2 ;iCnt++)
     {    
          if((iValue % iCnt)==0)
          {
               printf("%d\n", iCnt);
          }
     }
     return iValue;
}
int main()
{
     ULONG iNo = 0;
     int iRet = 0;
     printf("Enter a number\n");
     scanf("%d", &iNo);

     iRet = Display(iNo);
     printf("The factors of the following numbers are : %d\n", iRet);

     return 0;
}