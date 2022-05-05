#include<iostream>
using namespace std;

int main()
{
int arr[10],n,i,sum=0;
cout<<"How many elemnt u want to enter? "<<endl;
cin>>n;
cout<<"Enter the "<<n<<"number of elements: "<<endl;

for (int i = 0; i < n; i++)
{
   cin>>arr[i];
}
for (int i = 0; i < n; i++)
{
    sum+=arr[i];
}
cout<<"The Sum of array is: "<<sum;
return 0;
}


