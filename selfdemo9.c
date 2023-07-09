//Enter the frequency of numbers
#include<stdio.h>
void Display(int no)
{    
     if(no < 0)
     {
          no = -no;
     }
     int iCnt = 0;
     for(iCnt = 0; iCnt<=no ; iCnt ++)
     {
          printf("%d\n", iCnt);
     }
}
int main()
{
     int iNo = 0;
     printf("Enter a number \n");
     scanf("%d", &iNo);

     Display(iNo);
     return 0;
}