//Write a program which accept one number from user and check wheather that number is greater tham 100 or not.
//Input : 101
//Output : Greater
#include <stdio.h>
typedef int BOOL;
#define TRUE 1;
#define FALSE 0;
BOOL ChkGreater(int iNo)
{
    if(iNo > 100)
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
    printf("Enter a number \n");
    scanf("%d", &iValue);

    bRet = ChkGreater(iValue);

    if(bRet == 1)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }
    return 0;
}