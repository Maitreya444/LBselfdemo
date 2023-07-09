//Factors of the number 
#include<stdio.h>
void Display(int iValue)
{
     int iCnt = 0;
     for (iCnt = 1; iCnt<=iValue ;iCnt++)
     {    
          {
               if((iValue % iCnt)==0)
               {
                    printf("%d\n", iCnt);
               }
          }
     }
}
int main()
{
     int iNo = 0;
     printf("Enter a number\n");
     scanf("%d", &iNo);

     Display(iNo);
     return 0;
}