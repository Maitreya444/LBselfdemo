//Write a program which accept number from user and display all its non factors.
//Input  :  12
//Output :  5   7   8   9   10  11

#include<stdio.h>
void NonFactor(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt)!=0)
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a number \n");
    scanf("%d", &iValue);

    NonFactor(iValue);

    return 0;
}