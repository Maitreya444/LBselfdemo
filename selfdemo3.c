//Sakshhhh got her first Salary so she gave you infinte amount of money, find is it an odd or even amount.
#include<stdio.h>
void CheckEvenOdd(int Value)
{
          if((Value %2 ==0))
          {
               printf("The money contains even numbers \n");
          }
          else
          {
               printf("The money contains odd numbers \n");
          }
}
int main()
{
     unsigned int No = 0;
     printf("Enter how much number you can count out infinite Money Honey \n");
     scanf("%d", &No);

     CheckEvenOdd(No);
     return 0;
}
