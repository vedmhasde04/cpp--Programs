#include<iostream>
using namespace std;

bool ChkCapital(char ch)
{
    if ((ch >= 'A') && (ch <= 'a'))
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
    bool bRet = false;
    char ch1 = '\0';

    cout<<"Enter letter: ";
    cin>>ch1;

    bRet = ChkCapital(ch1);
    if (bRet == true)
    {
        cout<<"It is a capital letter"<<endl;
    }
    else
    {
        cout<<"It is a small letter"<<endl;
    }
            
    return 0;
}