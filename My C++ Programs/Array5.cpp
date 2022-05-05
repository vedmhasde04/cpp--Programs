#include<iostream>
using namespace std;

float Addition(float*Brr, float fSize)
{
    int jCnt = 0;

    float iSum = 0;
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

    float *Arr = new float;

    cout<<"Enter numbers: "<<endl;
    for ( iCnt = 0; iCnt < iLen; iCnt++)
    {
        cin>>Arr[iCnt];
    }
    
    fRet = Addition(Arr,iLen);
    cout<<"Addition is: "<<fRet;

    free(Arr);
    return 0;
}