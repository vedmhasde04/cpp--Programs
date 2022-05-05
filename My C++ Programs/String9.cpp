#include<iostream>
using namespace std;

int Cntletters(char *str)
{
  int iCnt = 0;

  while (*str != '\0')
  {
      if ((*str >= 'A') && (*str <= 'Z')) 
      {
         iCnt++;
      }
     str++;

  }
  return iCnt;
}
int main()
{
    char Arr[20];
    int cRet = 0;
    cout<<"Enter String: ";
    cin.get(Arr,20);

   cRet = Cntletters(Arr);

   cout<<"Capital letters are: "<<cRet;

    return 0;
}