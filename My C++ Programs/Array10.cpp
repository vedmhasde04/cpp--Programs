#include<iostream>
using namespace std;

int SumEven(int*Brr, int iSize)
{
    int i = 0;
    int iSum = 0;

    for ( i = 0; i < iSize; i++)
    {
       if ((Brr[i] % 2) == 0)
       {
          iSum = iSum + Brr[i];
       }
       
    }
   return iSum; 
}
int main()
{
    int jCnt = 0;
    int iRet = 0;
    int iLen = 0;
    int *Arr = NULL;

    cout<<"Enter number of elements: ";
    cin >> iLen;
   
    Arr = new int;
    cout<<"Elements are: "<<endl;
    for ( jCnt = 0; jCnt < iLen; jCnt++)
    {
       cin>>Arr[jCnt];
    }
    
    iRet = SumEven(Arr,iLen);

    cout<<"Result is: "<<iRet;
    free(Arr);

    return 0;
}