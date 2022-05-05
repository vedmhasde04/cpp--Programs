#include <iostream>
#include<string.h>
using namespace std;

void CntLetters(string str)
{
    int small = 0, capital = 0;
    int itr = 0;
    while(itr<str.length()){
        if(str[itr] == ' '){
            itr++;
            continue;
        }
        if(str[itr] >= 'a' && str[itr] <= 'z')small++;
        if(str[itr] >= 'A' && str[itr] <= 'Z')capital++;
        itr++;
    }
    cout << "Small letters are: " << small<< endl;
    cout << "Capital letters are:  " << capital;
}
int main()
{
    string str ;
    cout<<"Enter the senetence";
    cin>>str;
    CntLetters(str);
    return 0;
}