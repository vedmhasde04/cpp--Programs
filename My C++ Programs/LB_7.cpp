#include<iostream>
using namespace std;

class Demo
{
    public:
    int iCnt = 0;
    
    void Display(int iNo)
    {
        while (iNo > 0)
        {
           cout<<" * ";
           iNo--;
        }
        
        
    }
};
int main()
{
    Demo obj;
    int iValue = 0;

    cout<<"Enter the number: ";
    cin>>iValue;

    obj.Display(iValue);

    return 0;
}
