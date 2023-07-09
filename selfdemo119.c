//Write a program which accpet number from user and check wehater its has 0 or not
//Input : 2395
//Output: There is no zero
#include<stdio.h>
typedef int BOOL;
#define TRUE 1;
#define FALSE 0;
BOOL ChkValue(int iNo)
{
    int iDigit = 0;
    while(iNo !=0)
    {
        if(iDigit ==0)
        {
            break;
        }
        iNo = iNo / 10;
    }
    if(iNo ==0)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    pritf("Enter a number \n");
    scanf("%d", &iValue);

    bRet = ChkValue(iValue);

    
}