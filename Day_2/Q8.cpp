#include<iostream>
using namespace std;

int main(){
    int n, n1, rem, rev=0;
    cout<<"Enter a number n: ";
    cin>>n;
    n1=n;
    while(n1>0){
        rem=n1%10;
        rev=rev*10+rem;
        n1=n1/10;
    }
    if(rev==n){
        cout<<"Number is pallindrome ";
    }
    else{
        cout<<"Number is not pallindrome ";
    }
    return 0;
}