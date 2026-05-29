#include<iostream>
using namespace std;

int main(){
    int n, n1, rev=0, rem;
    cout<<"Enter a number n: ";
    cin>>n;
    n1=n;
    while(n1>0){
        rem=n1%10;
        rev=rev*10+rem;
        n1=n1/10;
    }
    cout<<"Reverse of the number "<<n<<" is "<<rev;
    return 0;
}