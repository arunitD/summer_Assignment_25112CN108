#include<iostream>
using namespace std;
int main(){
    int n, rem=1, place=1, binary=0, n1;
    cout<<"Enter a number n: ";
    cin>>n;
    n1=n;
    while(n>0){
        rem=n%2;
        binary=binary+rem*place;
        place=place*10;
        n=n/2;
    }
    cout<<"The conversion from decimal to binary of the number "<<n1<<" is "<<binary;
    return 0;
}