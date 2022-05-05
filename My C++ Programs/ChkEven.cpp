#include<iostream>
using namespace std;

int ChkEven(int);

int main()
{
    int iValue = 0;
    int iRet = 0;


    cout<<"Enter the number"<<endl;
    cin>> iValue;
     
     iRet = ChkEven(iValue);

    cout<<"Even Digits are: "<<iRet<<endl;

    return 0;
}
int ChkEven(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while (iNo > 0)
    {
       iDigit = iNo % 10;
       iNo = iNo / 10;

       if ((iDigit % 2) == 0)
       {
           iCnt ++;
       }
       
    }
    return iCnt;
}