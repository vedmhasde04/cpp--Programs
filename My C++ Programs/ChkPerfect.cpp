#include<iostream>
using namespace std; 

bool CheckPerfect(int);
int SumFactors(int);

int main()
{
   int iValue = 0;
    bool bRet = false;

  cout<<"Enter the number"<<endl;
  cin>> iValue;
   
   bRet = CheckPerfect(iValue);

   if (bRet == true)
   {
       cout<<"Number is perfect"<<endl;;
   }
   else
   {
       cout<<"Number is not perfect"<<endl;;
   }
   
  return 0;
}
bool CheckPerfect(int iNumber)
{
    int iRet = 0,iSum = 0;
    iRet = SumFactors(iNumber);

    if (iRet == iNumber)
    {
       return true;
    }
    else
    {
        return false;
    }
int Sumfactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    

    for ( iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if ((iNo % iCnt)== 0)
        {
           iSum = iSum + iCnt;   
        }
    }
     return iSum;
}


