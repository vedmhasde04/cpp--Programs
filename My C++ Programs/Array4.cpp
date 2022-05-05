#include<iostream>
using namespace std;

int Addition(int*Brr,int iSize)
{
    int jCnt = 0;
    int iSum = 0;

    for ( jCnt = 0; jCnt < iSize; jCnt++)
    {
        iSum = iSum + (*Brr);
        Brr++;
    }
    return iSum;
}
int main()
{
    int iCnt = 0;
    int iLen = 0;
    int iRet = 0;

    cout<<"Number of elements: "<<endl;
    cin>>iLen;

    int *Arr = new int;

    cout<<"Enter the numbers: "<<endl;
    for ( iCnt = 0; iCnt < iLen; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    iRet = Addition(Arr,iLen); 
    cout<<"Addition is: "<<iRet;

    delete(Arr);
    return 0;
}