//Write a program which accpet number from user and display its multiplication of its factors.
//Input :  12
//Output : 144  (1*2*3*4*6)

#include<stdio.h>
int MultFact(int iNo)
{
    int iCnt = 0;
    int Add = 1;
    for(iCnt = 2; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            printf("%d\n", iCnt);
            Add = Add * iCnt;
        }
    }
    return Add;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number \n");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factors is :%d\n", iRet);

    return 0;
}