#include<iostream>
using namespace std;

int Display(char*Brr)
{
    cout<<"Your name is: "<<Brr;
}
int main()
{
    char str[50];
    cout<<"Enter a name: ";
    cin.get(str,50);

    Display(str);
    return 0;
}