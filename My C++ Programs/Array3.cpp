#include<iostream>
using namespace std;

int Addition(int*Brr,int iSize)
{
    int jCnt = 0,iSum = 0;
    for ( jCnt= 0; jCnt < iSize; jCnt++)
    {
        iSum = iSum + (*Brr);
        Brr++;
    }
    return iSum;
}
int main()
{
    int iCnt = 0;
    int Arr[5];
    int iRet = 0;
    cout<<"Enter numbers"<<endl;
     for ( iCnt = 0; iCnt < 5; iCnt++)
     {
        cin>>Arr[iCnt];
     }
    iRet = Addition(Arr,5);

    cout<<"Addition is: "<<iRet;
    return 0;
}