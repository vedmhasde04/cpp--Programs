#include<iostream>
using namespace std;

int CntVowels(char *str)
{
    int iCnt = 0;
    if (str == NULL)
    {
      return -1;
    }
    
   while (*str != '\0')
   {
      if ((*str == 'a') || (*str == 'e') || (*str == 'i') ||(*str == 'o') ||(*str == 'u'))
      {
        iCnt++; 
      }
     *str++;
   }
   return iCnt;
}
int main()
{
    char crr[30];
    int iRet = 0;

    cout<<"Enter String: ";
    cin.get(crr,30);

    iRet = CntVowels(crr);

    cout<<"Vowels are: "<<iRet<<endl;
    return 0;
}