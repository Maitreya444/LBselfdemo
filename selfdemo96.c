//Write a program which accept two numbers and check whetaher numbers are equal or not.
//Input : 10    10
//Output: Equal
#include<stdio.h>
void ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
}
int main()
{
    int iValue1 =0;
    int iValue2 =0;
    printf("Enter number 1\n");
    scanf("%d", &iValue1);
    printf("Enter number 2\n");
    scanf("%d", &iValue2);

    ChkEqual(iValue1, iValue2);
    return 0;
}