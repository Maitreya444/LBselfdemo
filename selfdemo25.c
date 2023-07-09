//Check Perfect 
#include <stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
bool CheckPerfect(int No)
{
     int iCnt = 0;
     int iSum = 0;
     for(iCnt = 1; iCnt <= No/2; iCnt++)
     {
          if(No % iCnt ==0)
          {
               iSum = iSum + iCnt;
          }
          if(iSum > No)
          {
               break;
          }
     }
     if(iSum == No)
     {
          return TRUE;
     }
     else
     {
          return FALSE;
     }
}
int main()
{
     int iNo = 0;
     bool bRet = FALSE;

     printf("Enter a number \n");
     scanf("%d", &iNo);

     bRet = CheckPerfect(iNo);

     if(bRet == TRUE)
     {
          printf("It is a perfect number %d\n", bRet);
     }
     else
     {
          printf("It is not a perfect number %d\n", bRet);
     }
     return 0;
}