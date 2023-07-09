//Input : 5
//Output :-5  0  5
#include<stdio.h>
void Display(int num)
{
     int iCnt = 0;
     for(iCnt = -num; iCnt <= num ; iCnt ++)
     {
          printf("%d", iCnt);
     }
}
int main()
{
     int iNo = 0;
     printf("Enter number \n");
     scanf("%d", &iNo);

     Display(iNo);
}