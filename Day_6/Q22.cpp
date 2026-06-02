#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, power=0, dec=0;
    cout<<"Enter a number n: ";
    cin>>n;
    while(n>0){
        int rem=n%10;
        dec=dec+rem*pow(2,power);
        power++;
        n=n/10;
    }
    cout<<"The conversion of binary to decimal is "<<dec;
    return 0;
}