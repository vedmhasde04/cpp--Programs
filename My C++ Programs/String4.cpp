#include<iostream>
using namespace std;

unsigned int strlen(char*Brr)
{
    int iCnt = 0;
    if (Brr == NULL)
    {
        return 0;
    }
    while (*Brr != '\0')
    {
       Brr++;
       iCnt++;
    }
    return iCnt;
     
}
int main()
{
    char Arr[20];
    int iRet = 0;

    cout<<"Enter string: ";
    cin.get(Arr,20);

    iRet = strlen(Arr);

    cout<<"Length of string is: "<<iRet;
    return 0;
}