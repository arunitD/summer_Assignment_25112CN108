#include<iostream>
using namespace std;

int sumOfDigits(int n){
    if(n==0){
        return 0;
    }
    int n1=n;
    n1=n%10;
    return n1+sumOfDigits(n/10);
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    cout<<"The sum of the digits of the number "<<n<<" is "<<sumOfDigits(n);

    return 0;
}