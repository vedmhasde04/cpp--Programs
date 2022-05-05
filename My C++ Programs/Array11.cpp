#include<iostream>
using namespace std;

int SumOdd(int*Brr, int iSize)
{
   int iCnt,iSum = 0;

   for ( iCnt = 0; iCnt < iSize; iCnt++)
   {
       if ((Brr[iCnt] % 2) != 0)
       {
          iSum = iSum + Brr[iCnt];
       }
       
   }
  return iSum;
} 
int main()
{
    int jCnt = 0;
    int iLen = 0;
    int iRet = 0;
    int *Arr = NULL;

    cout<<"Enter number of elements: ";
    cin>>iLen;

    Arr = new int;

    cout<<"Elements are: "<<endl;
    for ( jCnt = 0; jCnt < iLen; jCnt++)
    {
        cin>>Arr[jCnt];
    }
    
    iRet = SumOdd(Arr,iLen);
    cout<<"Result is: "<<iRet;

    free(Arr);
    return 0;
}
