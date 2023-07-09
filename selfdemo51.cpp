//Program to dive two numbers
#include <iostream>
using namespace std;
int Divide(int iNo1, int iNo2)
{
    if(iNo2 ==0)
    {
        return -1;
    }
    int iAns = 0;
    iAns = iNo1/iNo2;

    return iAns;
}
int main()
{
    int iValue1 = 15;
    int iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);

    cout<<"Dividsion is :"<<iRet;
    return 0;
}