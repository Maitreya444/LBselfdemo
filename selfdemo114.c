//Write a program which accpet N and print first 5 numbers of N
//Input : 4
//Output: 4  8  12  16  20
#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    int Ans = 1;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a number \n");
    scanf("%d", &iValue);
    Display(iValue);
    return 0;
}