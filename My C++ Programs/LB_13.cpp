#include<iostream>
using namespace std;

class Demo
{
  public: 
  int iCnt;
  int iDigit;
  int iSum = 0;


  void Display(int iNo)
  {
      while(iNo!=0)
      {
         iDigit = iNo % 10;
         iNo = iNo/10;

         cout<<" "<<iDigit;

         iSum = iSum + iDigit;
         
      }
      cout<<iSum<<endl;
  }
};
int main()
{
    Demo obj;
    int iValue = 0;

    cout<<"Enter number: ";
    cin>>iValue;

    obj.Display(iValue);
    return 0;
}