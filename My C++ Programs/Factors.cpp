#include<iostream>
using namespace std;

 int DisplayFact(int);

 int main()
 {
     int iNo = 0;
     
     cout<<"Enter the number"<<endl;
     cin>> iNo;

      DisplayFact(iNo);

     return 0;
 }
   int DisplayFact(int iValue)
 {
     int iCnt = 0;
     for ( iCnt = 1; iCnt < iValue; iCnt++)
     {
         if((iValue % iCnt) == 0)
         {
             cout<<iCnt<<endl;
         }
     }
     
 }