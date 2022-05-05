#include<iostream>
using namespace std;

int main()
{
    int iCnt = 0;
    int iSum = 0;
    int Arr[100];

    cout<<"Enter the numbers"<<endl;
     
     for ( iCnt = 0; iCnt < 10; iCnt++)
     {
        cin>>Arr[iCnt];
     }
     for ( iCnt = 0; iCnt < 10; iCnt++)
     {
         iSum = iSum + Arr[iCnt];
     }
     cout<<"Addition is: "<<iSum;

     return 0;
}