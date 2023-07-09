//Accept one number from user and if the number is less than 10 then print Hello or else print demo.
#include<stdio.h>
void Display(int iNo)
{
    if(iNo > 10)
    {
        printf("Demo");
    }
    else
    {
        printf("Hello");
    }
}
int main()
{
    int iValue = 0;
    
    printf("Emnter number \n");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}