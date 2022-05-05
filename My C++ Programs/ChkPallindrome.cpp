#include<iostream>
using namespace std;

bool Chkpallindrome(bool);
int main()
{
   int iValue = 0;
   bool iRet = false;

   cout<<"Enter the number: "<<endl;
   cin>>iValue;

    iRet = ChkPallindrome(iValue);

   if ( iRet = true)
   {
       cout<<"Number is pallindrome "<<endl;
   }
   else
   {
       cout<<"Number is not pallindrome! "<<endl;
   }
   return 0;   
}
  int Reverse(int);

bool ChkPallindrome(int iInput)
{
    int iPal = 0;

    iPal = Reverse(iInput);
    if (iPal == iInput)
    {
      return true;  
    }
    else
    {
        return false;
    }
    
}
int Reverse(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo/10;
    } 
    return iRev;
}