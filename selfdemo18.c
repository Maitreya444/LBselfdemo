//Sakshi gave me A $xxx amount find wheather that amount is $xxx is perfect or not
#include<stdio.h>
#include<stdbool.h>
bool PerfectNo(int iValue)
{
     int iCnt = 0;
     int Sum = 0;

     for(iCnt =1 ; iCnt<= iValue/2; iCnt ++)
     {    
          if((iValue % iCnt) ==0)
          Sum = Sum + iCnt;
     }
     if (Sum == iValue)
     {
          return true;
     }
     else
     {
          return false;
     }
     return iValue;
}
int main()
{
     int iNo = 0;
     bool bRet = false;
     printf("Enter a number \n");
     scanf("%d", &iNo);

     bRet = PerfectNo(iNo);

     if(bRet == true)
     {
          printf("It is a perfect no %d\n", iNo);
     }
     else
     {
          printf("It is not perfect no %d\n",iNo);
     }
     return 0;
}