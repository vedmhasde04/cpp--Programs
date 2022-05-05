#include <iostream>
#include <stdbool.h>
using namespace std;

int Chknumber(int *Brr, int iSize, int iNo)
{
    int iCnt = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {

        if (iNo == Brr[iCnt])
        {
            return true;
        }
       
    }
    return false;
}
int main()
{
    int jCnt = 0;
    bool bRet = 0;
    int *Arr = NULL;
    int iLen = 0;
    int iValue = 0;

    cout << "Enter number of elements: ";
    cin >> iLen;

    Arr = new int;
    cout << "Enter elements: " << endl;
    for (jCnt = 0; jCnt < iLen; jCnt++)
    {
        cin >> Arr[jCnt];
    }

    cout << "Enter element to search: ";
    cin >> iValue;

    bRet = Chknumber(Arr, iLen, iValue);
    if (bRet == true)
    {
        cout << "Number is there";
    }
    else
    {
        cout << "Number is not there";
    }
    free(Arr);
    return 0;
}