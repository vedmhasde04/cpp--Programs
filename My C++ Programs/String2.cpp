#include<iostream>
using namespace std;

int Display(char*Brr)
{
    cout<<*Brr<<endl;
    Brr++;

    cout<<*Brr<<endl;
    Brr++;

    cout<<*Brr<<endl;
    Brr++;

    cout<<*Brr<<endl;
    Brr++;

    cout<<*Brr<<endl;
    Brr++;

}
int main()

{
    char Arr[10];
    
    cout<<"Enter name: ";
    cin.get(Arr,10);

    Display(Arr);
    return 0;
}