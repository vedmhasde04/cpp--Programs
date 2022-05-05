#include<iostream>
using namespace std;

int CountEven(int*Brr,int iSize)
{
    int iCnt = 0,i = 0;
    for ( i = 0; i < iSize; i++)
    {
        if((Brr[i] % 2)== 0)
        {
            iCnt++;
        }
    }
   return iCnt;

}
int main()
{
    int jCnt = 0;
    int iRet = 0;
    int iLen = 0;

    int *Arr = NULL;

    cout<<"Enter number of elements: ";
    cin>>iLen;

    Arr = new int;

    cout<<"Enter elements: "<<endl;
    for ( jCnt = 0; jCnt < iLen; jCnt++)
    {
         cin>>Arr[jCnt];
    }

    iRet = CountEven(Arr,iLen);
    cout<<"Result is: "<<iRet;
    free(Arr);

    return 0;
}