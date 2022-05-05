#include<iostream>
using namespace std;

bool Check(int iNo)
{
    if ((iNo % 5) == 0)
    {
      return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    bRet = Check(iValue);

    if (bRet == true)
    {
       cout<<"Divisible by 5"<<endl;
    }
    else
    {
        cout<<"Not Divisible"<<endl;
    }
    
    return 0;
}