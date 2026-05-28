#include<iostream>
using namespace std;

int main(){
    int n, fact=1;
    cout<<" Enter a number n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    cout<<"factorial of "<<n<<" = "<<fact;
    return 0;
}