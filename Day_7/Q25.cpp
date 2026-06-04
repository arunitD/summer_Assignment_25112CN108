#include<iostream>
using namespace std;

long long int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }

    return n*factorial(n-1);

}

int main(){
    int n;
    cout<<"Enter a number n: ";
    cin>>n;

    cout<<"The factorial of the number "<<n<<" is "<<factorial(n);
    return 0;
}