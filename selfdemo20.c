//Array Demo
#include<stdio.h>
int main()
{
     int No1 = 10;
     int No2 = 20;
     int No3 = 30;
     int No4 = 40;
     int No5 = 50;

     int Arr[5] = {60,70,80,90,100};

     printf("%d", Arr[0]);
     printf("%d", Arr[1]);
     printf("%d", Arr[2]);
     printf("%d", Arr[3]);
     printf("%d", Arr);
     printf("%d", &Arr[3]);

     return 0;
}