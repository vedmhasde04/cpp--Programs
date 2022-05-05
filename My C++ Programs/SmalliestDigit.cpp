#include<iostream>
using namespace std;

int SmallestDigit(int);

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number: "<<endl;
    cin>>iValue;

    iRet = SmallestDigit(iValue);

    cout<<"Smallest digit in number is: "<< iRet << endl;

    return 0;
}
 int SmallestDigit(int iNo)
 {
     int iDigit = 0;
     int iSDigit = 10;

     while (iNo != 0)
     {
         iDigit = iNo % 10;
         if (iSDigit > iDigit)
         {   
             iSDigit = iDigit;
         }
          iNo = iNo / 10;
      }
     return iSDigit;
 }