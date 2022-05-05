#include<iostream>
using namespace std;

int AdditionDigits(int);

int main()
{
    int iValue,iRet = 0;

    cout<<"Enter the number"<<endl;
     cin>>iValue;

    iRet = AdditionDigits(iValue);

    cout<<"Addition of digits is: "<<iRet<<endl;

    return 0; 
}
int AdditionDigits(int iNo)
{
    int iDigit , iSum = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo/10;
    }
    return iSum;
    
}
