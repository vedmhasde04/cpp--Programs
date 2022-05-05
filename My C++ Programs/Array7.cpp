#include<iostream>
using namespace std;

float Average(float *Brr,float iSize)
{
  int iCnt = 0;
  float iSum = 0;
  float fResult = 0;
  for ( iCnt = 0; iCnt < iSize; iCnt++)
  {
    iSum = iSum + (*Brr);
    *Brr++;
  }
  fResult = (float)iSum / (float)iSize;
  return fResult;
}
int main()
{
  int jCnt = 0;
  int iLen = 0;
  float *ptr = 0;
  float fRet = 0.0f;

  cout<<"Enter number of elements: ";
  cin>>iLen;

  ptr = new float;
  cout<<"Enter elements: "<<endl;
  for ( jCnt = 0; jCnt < iLen; jCnt++)
  {
    cin>>ptr[jCnt];
  }
  
  fRet = Average(ptr,iLen);
  cout<<"Average is: "<<fRet;
  return 0;
}