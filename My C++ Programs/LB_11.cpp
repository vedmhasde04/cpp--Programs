#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;
class Demo
{
    public:
    BOOL ChkEven(int iNo)
    {
      if ((iNo % 2) == 0)
      {
         cout<<"Number is even"<<endl;
      }
      else
      {
          cout<<"Number is odd"<<endl;
      }
      
    }
};
int main()
{
    Demo obj;
    int iValue = 0;
    BOOL bRet = FALSE;

    cout<<"Enter number: ";
    cin>>iValue;

    bRet  = obj.ChkEven(iValue);
    return 0;
}