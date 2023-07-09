//Saksh started earning money in 6 figures and you started earning in 3 figures no find is her salary divisble by 3.
#include<stdio.h>
#include<stdbool.h>
bool CheckDivisble(int iValue)
{
     if(iValue %3 ==0)
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
     int iMoney = 0;
     bool bRet = 0;

     printf("Enter a 6 digit salary of Saksh \n");
     scanf("%d", &iMoney);

     bRet = CheckDivisble(iMoney);

     if(bRet == true)
     {
          printf("Yes it is divisble by 3");
     }
     else
     {
          printf("No its not divsible by 3");
     }
     return 0;
}