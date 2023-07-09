//Write a program which accept 3 numbers and print its multiplication
//Input :   5   4   7
//Output:   140
#include<stdio.h>
int Multiply(int iNo1, int iNo2, int iNo3)
{
    if((iNo1 || iNo2 || iNo3)==0)
    {   
        printf("Please enter +ve value");
        return -1;
    }
    int Ans = 0;
    Ans = iNo1 * iNo2 * iNo3;
    return Ans;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;
    printf("Enter a number 1 \n");
    scanf("%d", &iValue1);
    printf("Enter a number 2 \n");
    scanf("%d", &iValue2);
    printf("Enter a number 3 \n");
    scanf("%d", &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);
    printf("Multiplication is %d", iRet);
    return 0;
}