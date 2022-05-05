#include<iostream>
using namespace std;

void Accept(int iNo)
{
    int iCnt = 0;
    for ( iCnt = 0; iCnt <= iNo; iCnt++)
    {
        cout<<"*";
    }
    
}
int main()
{
    int Value = 0;
    cout<<"Enter the value: "<<endl;
    cin>>Value;

    Accept(Value);
    return 0;
}