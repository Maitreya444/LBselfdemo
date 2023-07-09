//Display Factors
#include<stdio.h>
void DisplayFactors(int no)
{
     int iCnt = 0;
     for(iCnt = 1; iCnt<no/2; iCnt ++)
     {
          if(no % iCnt ==0)
          {
               printf("%d\n",iCnt);
          }
     }
}
int main()
{
     int iNo1 = 0;

     printf("Enter a number \n");
     scanf("%d", &iNo1);

     DisplayFactors(iNo1);
     return 0;
}