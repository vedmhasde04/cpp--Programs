#include<iostream>
using namespace std;

class Demo
{
    public:
    int iCnt;

     Demo(int iNo,int Freq)
    {
        for ( iCnt = 0; iCnt < Freq; iCnt++)
        {
            cout<<" "<<iNo ;
        }
        
    }
};
int main()
{
    Demo obj;

    int iValue = 0;
    int iCount = 0;

    cout<<"Enter number: ";
    cin>>iValue;

    cout<<"Enter Freq: ";
    cin>>iCount;

    obj.Display(iValue,iCount);
    return 0;
}