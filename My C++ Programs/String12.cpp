#include<iostream>
using namespace std;

int CntFreq(char *str,char ch)
{
    int iCnt = 0;
    if (str == NULL)
    {
       return -1;
    }
    while (*str != '\0')
    {
     if (*str == ch)
     {
        iCnt++;
     }
     str++;
    }
   return iCnt; 
}
int main()
{
    char c = '\0';
    char Arr[30];
    int iRet = 0;

    cout<<"Enter string: ";
    cin.get(Arr,30);
    
    cout<<"Enter the character: ";
    cin>>c;
    
    iRet = CntFreq(Arr,c);
    cout<<"Frequency is: "<<iRet;
    return 0;
}