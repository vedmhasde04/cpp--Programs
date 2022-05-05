#include<iostream>
using namespace std;

void Display(int);

int main()
{
    int iNo = 0;
    cout<<"How many times you want print\n";
    cin>>iNo;

    Display(iNo);
}
void Display(int iValue)
{
    int i = 0;
    for ( i = 0; i < iValue; i++)
    {
       cout<<"Marvellous\n";
    }
    
}