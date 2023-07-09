//Sakshi gave you $n now print n in series of n times
#include<stdio.h>
void Nseries(int iNo)
{
     int iCnt = 0;
     for(iCnt =1; iCnt<=iNo; iCnt++)
     {
          printf("%d\n",iNo);
     }
}
int main()
{
     int iValue = 0;
     printf("Enter a number :-");
     scanf("%d", &iValue);

     Nseries(iValue);
     return 0;
}