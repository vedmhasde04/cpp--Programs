#include<iostream>
using namespace std;

int ChkOdd(int);

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the numbers: "<<endl;
    cin>>iValue;

     iRet = ChkOdd(iValue);

    cout<<"Number of Odd digits are: "<<iRet<<endl;

    return 0;
}
int ChkOdd(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if ((iNo % 2)!= 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}