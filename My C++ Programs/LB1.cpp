#include<iostream>
using namespace std;

int Divide(int iNo1, int iNo2)
{
int iAns = 0;
if(iNo2 > iNo1)
{
return -1;
}
iAns = iNo1 / iNo2;
return iAns;
}
int main()
{
int iValue1 =0, iValue2 = 0;

cout<<"Enter first number: "<<endl;
cin>>iValue1;

cout<<"Enter second number: "<<endl;
cin>>iValue2;
int iRet = 0;
iRet = Divide(iValue1, iValue2);
cout<<"Division is: "<<iRet;
return 0;
}