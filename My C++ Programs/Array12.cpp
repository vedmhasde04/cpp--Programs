#include<iostream>
using namespace std;

int Difference(int*Brr,int iSize)
{
    int iCnt = 0;
    int iMax = Brr[0];
    int iMin = Brr[0];

    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
       if (Brr[iCnt] < iMin)
       {
           iMin = Brr[iCnt];
       }
       if (Brr[iCnt] > iMax)
       {
          iMax = Brr[iCnt];
       }
       
    }
    return iMax - iMin;
}
int main()
{
    int jCnt = 0;
    int iRet = 0;
    int *Arr = NULL;
    int iLen = 0;
    
    cout<<"Enter number of elements: " ;
    cin>>iLen;

    Arr = new int;
    cout<<"Elements are: "<<endl;
    for ( jCnt = 0; jCnt < iLen; jCnt++)
    {
        cin>>Arr[jCnt];
    }
    
    iRet = Difference(Arr,iLen);
    cout<<"Subtraction is: "<<iRet;
    free(Arr);

    return 0;
}