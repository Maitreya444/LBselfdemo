//Write a program which accept name from user and print that name.
//Input : Maitreya Gangurde
//Output : Maitreya Gangurde
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char name[30];

    cout<<"Enter your Name"<<"\n";
    cin.getline(name,30);
    cout<<"Your name is "<< name<<"\n";
    return 0;
}