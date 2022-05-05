#include<iostream>
using namespace std;

int Display(char*Brr)
{
    cout<<"Name is: "<<Brr;
}
int main()
{
    char Arr[50];

    cout<<"Enter your name: ";
    cin>>Arr;

    Display(Arr);
    return 0;
}