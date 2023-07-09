//Write a program which accepts N from user and print all odd numbers up to N.
//Input : 18
//Output: 1 3 5 7 8 9 11 13 15 17
#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2)!=0)
        {
            printf("%d\t", iCnt);
        } 
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a Number \n");
    scanf("%d", &iValue);
    Display(iValue);
    return 0;
}