#include<iostream>
using namespace std;

long long int fibonacci(int n){
    // when a user enters a negative number or 0 then that is an invalid input
    // therefore the program will return -1 which represents invalid input
    if(n <= 0){
        return -1;  
    }
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    cout<<"The "<<n<<"th fibonacci term is "<<fibonacci(n);
    
    return 0;
}