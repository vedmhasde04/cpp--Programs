#include<iostream>
using namespace std;

class Demo
{
    public:
  void Display( int iNo)
  {
      if(iNo < 10)
      {
          cout<<"Hello";
      }
      else
      {
          cout<<"Demo";
      }

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