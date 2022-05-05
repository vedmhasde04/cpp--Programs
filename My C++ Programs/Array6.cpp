#include<iostream>
using namespace std;

int Addition(int Brr[], float fSize)
{
    int jCnt = 0;
    int iSum = 0;
    for ( jCnt = 0; jCnt< fSize; jCnt++)
    {
        iSum = iSum + (*Brr);
        *Brr++;
    }
    return iSum;
}
int main()
{
    int iCnt = 0;
    int iLen = 0;
    
    float fRet = 0.0f;

    cout<<"Number of elements: "<<endl;
    cin>>iLen;

    int Arr[iLen];
    cout<<"Enter numbers: "<<endl;
    for ( iCnt = 0; iCnt < iLen; iCnt++)
    {
        cin>>Arr[iCnt];
    }
    
    fRet = Addition(Arr,iLen);
    cout<<"Addition is: "<<fRet;

    return 0;
}