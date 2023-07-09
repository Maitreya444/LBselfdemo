//Print hi you are best n number of times and take n from user
#include<stdio.h>
void Display(int no)
{    
     if(no<0)
     {
          no = -no;
     }
     int iCnt = 0;
     for(iCnt =1; iCnt<=no; iCnt++)
     {
          printf("Heyyyy my BossLady :)<3 you're the best I miss you so much \n");
     }
}
int main()
{
     int iNo = 0;

     printf("Enter how many times you want to display number \n");
     scanf("%d",&iNo);

     Display(iNo);
     return 0;
}