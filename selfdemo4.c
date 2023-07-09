//Sakshhhh got her first Salary so she gave you infinte amount of money, find is it an odd or even amount.
//Use improved technique
#include<stdio.h>
#include<stdbool.h>
bool CheckEvenOdd(int iValue)
{
     if(iValue %2 ==0)
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

     printf("Enter amount my honey\n");
     scanf("%d", &iMoney);

     bRet = CheckEvenOdd(iMoney);

     if(bRet ==true)
     {
          printf("The amount is even Honey");
     }
     else
     {
          printf("The amount is odd Honey");
     }
     return 0;
}