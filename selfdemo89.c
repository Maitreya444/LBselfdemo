//Write a program which accept number from user and return difference beyween summation of its factors and nonFactors
//Input :   12
//output :  -34     (16-50)
#include<stdio.h>
int Sum(int iNo)
{
    int fCnt = 0;
    int nCnt = 0;
    int Add = 0;
    int Sub = 0;
    int Total = 0;
    for(fCnt = 1; fCnt <iNo; fCnt++)
    {
        if((iNo % fCnt)==0)
        {
            Add = Add + fCnt;
        }
    }
    return Add;
    
    for(nCnt = 1; nCnt <iNo; nCnt++)
    {
        if((iNo % nCnt)!=0)
        {
            Sub = Sub - nCnt;
        }
    }
    return Sub;
    {
        Total= Add - Sub;
        return Total;
    }
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter a number \n");
    scanf("%d", &iValue);
    iRet = Sum(iValue);
    printf("Summation of factors and non factors is %d\n", iRet);
    return 0;
}