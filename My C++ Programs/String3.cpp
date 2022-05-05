#include<iostream>
using namespace std;

int Display(char*Brr)
{
  while (*Brr != '\0')
  {
      cout<<*Brr<<endl;
      Brr++;
  }
  
}
int main()
{
    char Arr[10];

    cout<<"Enter name: ";
    cin>>Arr;

    Display(Arr);
    return 0;
}