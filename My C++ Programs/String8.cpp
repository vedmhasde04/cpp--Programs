#include<iostream>
using namespace std;
 
char ChkToggel(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
       return ch + 32;
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        return ch - 32;
    }
    
}
int main()
{
    char ch1 = '\0', bRet = '\0';

    
    cout<<"Enter letter: ";
    cin>>ch1;

    bRet = ChkToggel(ch1);

    cout<<"Toggled letter is: "<<bRet;

    return 0;
}