//Accept one number from user check wheather it is divisible by 5 or not
#include<stdio.h>
typedef int BOOL;
#define TRUE 1;
#define FALSE 0;
BOOL CheckDiv(int iNo)
{
    if((iNo % 5) ==0)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    bRet = CheckDiv(iValue);

    if(bRet == 1)
    {
        printf("It is divisible by 5");
    }
    else
    {
        printf("It is not divisible by 5");
    }
    return 0;
}   