//Accept two numbers from user and display first number in second number of times.
// Input : 12   5
//Output : 12   12  12  12  12
#include<stdio.h>
void Display(int iNo1, int iNo2)
{
    int iCnt =0;
    for(iCnt = 1; iCnt <=iNo1; iCnt++)
    {
        printf("%d\n", iNo2);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    printf("Enter number of times you want to display it\n");
    scanf("%d", &iCount);

    Display(iCount, iValue);
    return 0;
}   