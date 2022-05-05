#include<iostream>
using namespace std;

bool ChkEven(int);

int main()
{
  int iNo = 0;
  bool bRet = false;

 cout << "Enter the number"<<endl;
 cin>> iNo;

 bRet = ChkEven(iNo);

  if ( bRet == true)
  {
     cout << iNo <<" is a even number " <<endl;  
  }
  else
  {
      cout << iNo <<" is not a given number"<<endl;
  }
  return 0;
  
}
  bool ChkEven(int iValue)
{
     
     if ((iValue % 2) == 0)
     {
        return true;
     }
     else
     {
         return false;
     }
     

}