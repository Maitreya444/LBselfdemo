//Accept one number from user and if the number is less than 10 then print Hello or else print demo.
#include<iostream>
using namespace std;
void Display(int iNo)
{
    if(iNo > 10)
    {
        cout<<"Demo";
    }
    else
    {
        cout<<"Hello";
    }
}
int main()
{
    int iValue = 0;
    
    cout<<"Enter Number"<<"\n";
    cin>>iValue;

    Display(iValue);
    return 0;
}