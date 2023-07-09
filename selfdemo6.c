//Saksh started earning money in 6 figures and you started earning in 3 figures no find is her salary divisble by 3 an d6
#include<stdio.h>
#include<stdbool.h>
bool CheckDivisble(int iValue1, int iValue2)
{
     if((iValue1 %6 ==0) && (iValue2 %3 ==0))
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
     int iMoney1 = 0;
     int iMoney2 = 0;
     bool bRet = 0;

     printf("Enter a 6 digit salary of Saksh \n");
     scanf("%d", &iMoney1);


     printf("Enter a 3 digit salary of Maitreya \n");
     scanf("%d", &iMoney2);


     bRet = CheckDivisble(iMoney1, iMoney2);

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