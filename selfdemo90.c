//Write a program which accept name from user and print that name.
//Input : Maitreya Gangurde
//Output : Maitreya Gangurde
#include <stdio.h>
int main()
{
    char name[30];

    printf("Enter your Name \n");
    scanf("%[^\n]", &name);
    printf("Your name is :%s", name);
    return 0;
}