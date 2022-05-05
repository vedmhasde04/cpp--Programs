#include <iostream>
#include <stdbool.h>
using namespace std;

bool ChkPallindrome(char* str)
{
    char *start = str;
    char *end = str;

    while (*str != '\0')
    {   str++;
        end++;          
    }
    end--;

    while (start < end)
    {
        if (*start != *end)
        {
            return false;
            break;
        }
        start++;
        end--;
    }
    return true;
}
int main()
{
    char Arr[30];
    bool bRet = false;

    cout << "Enter string: ";
    cin.get(Arr, 30);
    // cout<<Arr;
    bRet = ChkPallindrome(Arr);
    if (bRet == true)
    {
        cout << "It is a pallindrome";
    }
    else
    {
        cout << "It is not a pallindrome";
    }
    return 0;
}