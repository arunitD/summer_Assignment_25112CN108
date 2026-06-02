#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, count=0;
    cout<<"Enter a decimal number n: ";
    cin>>n;
    while(n>0){
       int rem=n%2;
       if(rem==1){
        count++;
       }
       n/=2;
    }
    cout<<"The number of set bits is equal to "<<count;
    return 0;
}