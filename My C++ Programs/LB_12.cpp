#include<iostream>
using namespace std;

class Demo
{
   public:
   int iCnt = 2;
   
   void DisplayEven(int iNo)
   {
       if (iNo < 0)
       {
          iNo = -iNo; 
          return;
       }
      for ( iCnt = 1; iCnt <= 2* iNo ; iCnt++)
      {
         if ((iCnt % 2) == 0)
         {
            cout<<" "<<iCnt;
         }
         
      }

     /* while (iCnt > iNo)
      {
         if ((iCnt % 2) == 0)
         {
            iCnt = 2*(iCnt + 1);
            cout<<" "<<iCnt;
         }
         iCnt++;
        
      }*/
      
    }
};
int main()
{
    Demo obj;

     int ivalue = 0;
      
      cout<<"Enter number: ";
      cin>>ivalue;

      obj.DisplayEven(ivalue);
    return 0;
}