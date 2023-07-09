//Write a program which accept a number from user and return summation of its non factors
//Input : 12
//Output: 50
#include<stdio.h>
int SumNonFactors(int iNo)
{
    int iCnt = 0;
    int Add = 0;
    for(iCnt = 1; iCnt < iNo; iCnt ++)
    {
        if((iNo % iCnt)!=0)
        {
            printf("%d\n", iCnt);
            Add = Add + iCnt;
        }
    }
    return Add;
}
int main()
{
    int iValue = 0;
    int iRet =0;
    printf("Enter a value \n");
    scanf("%d", &iValue);
    iRet = SumNonFactors(iValue);

    printf("Summation of Non Factors is %d\n",iRet);
    return 0;
}