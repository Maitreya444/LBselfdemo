//SumFactors
#include<stdio.h>
int SumFactors(int no)
{    
    if(no < 0)     // Updator
    {
        no = -no;
    }
     int iCnt = 0;
     int iSum = 0;
     for(iCnt = 1; iCnt <= no; iCnt++)
     {
          if(no % iCnt ==0)
          {
               iSum = iSum + iCnt;
               printf("%d\n", iCnt);
          }
     }
     return iSum;
}
int main()
{
     int iNo = 0;
     int iRet = 0;
     printf("Enter number \n");
     scanf("%d", &iNo);

     iRet = SumFactors(iNo);
     printf("Summation is %d\n", iRet);
     return 0;
}