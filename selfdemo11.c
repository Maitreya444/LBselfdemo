//In the frequency of numbers check wheater how many numbers are odd.
#include<stdio.h>
typedef unsigned long int ULONG;
void Odd (int iNo)
{    
     int iCnt =0;
     for(iCnt = 0; iCnt <=iNo; iCnt ++)
     {
          if(iCnt %2 !=0)
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

     Odd(iValue);
     return 0;
}