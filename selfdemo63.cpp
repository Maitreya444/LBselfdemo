//Accept one number and display the number of * on screen
#include <iostream>
using namespace std;
void Accept()
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <=5; iCnt++)
    {
        cout<<"*\n";
    }
}
int main()
{
    int iValue = 0;
    Accept();
    
    return 0;
}