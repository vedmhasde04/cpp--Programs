#include<iostream>
using namespace std;
int Addition(int Brr[])
{
    int jCnt,iSum = 0;

    for ( jCnt = 0; jCnt < 5; jCnt++)
    {
        iSum = iSum + Brr[jCnt];
    }
 return iSum;  
}
int main()
{
    int iCnt = 0;
    int Arr[10];
    int iRet = 0;
    cout<<"Enter numbers"<<endl;

    for ( iCnt = 0; iCnt < 5; iCnt++)
    {
        cin>>Arr[iCnt];
    }
    iRet = Addition(Arr);

    cout<<"Addition is: "<<iRet;
    return 0;
}