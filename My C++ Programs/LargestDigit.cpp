#include<iostream>
using namespace std;

int LargestDigit(int);

int main()
{
    int iValue,iRet = 0;
    
    cout<<"Enter the number: "<<endl;
    cin>>iValue;

    iRet = LargestDigit(iValue);

    cout<<"Largest Digit in given number is: "<< iRet <<endl;
    
    return 0;
}
int LargestDigit(int iNo)
{
    int iDigit,iLDigit = 0;

    while ( iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit > iLDigit )
        {
            iLDigit = iDigit;
        }
        iNo = iNo/10;
    }
    return iLDigit;
    
}