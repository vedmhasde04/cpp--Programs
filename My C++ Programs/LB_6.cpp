#include<iostream>
using namespace std;

class Demo
{
    public:
    int iCnt = 0;

    void Display(int iNo)
    {
        for ( iCnt = 0; iCnt < iNo; iCnt++)
        {
           cout<<" * ";
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
