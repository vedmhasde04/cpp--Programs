#include<iostream>
using namespace std;
void count(int num, int even,int odd){
    while(num > 0){
        int digit = num%10;
        num/=10;
        if(digit%2==0){
            even ++;
        }else{odd++;}
    }
    cout<<" EVEN : "<<even<< " ODD "<<odd;
}
int main(){
    int num;
    int even = 0 , odd = 0 ;
    cout<<"Enter the numbers : ";
    cin>>num;
    count(num, even, odd);

}