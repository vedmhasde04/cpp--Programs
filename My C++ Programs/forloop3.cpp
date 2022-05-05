#include<iostream>
using namespace std;
                                       
void Display(string iWord, int iNo)
{
    
  for(int i = 0; i < iNo; i++)
  {
    cout<< iWord <<" ";
  }

}
int main()
{
    string iWord;
     int iNo;
    cout<<"Which word you want to display?"<<endl;
    cin>>iWord;

    cout << "How many times\t" << iWord << "\twants to display?" << endl;
    cin>>iNo;
    Display( iWord, iNo);
    return 0;
}