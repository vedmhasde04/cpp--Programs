#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT strlen(char*Brr)
{
    int iCnt = 0;

    if (Brr == NULL)
    {
      return 0;
    }
    while (*Brr != '\0')
    {
       iCnt++;
       Brr++;
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
    
    cout<<"Length is: "<<iRet;
    
  return 0;  
} 

