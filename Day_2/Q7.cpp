#include<iostream>
using namespace std;

int main(){
    int n, n1, pro=1, rem;
    cout<<"Enter a number n: ";
    cin>>n;
    n1=n;
    while(n1>0){
        rem=n1%10;
        pro=pro*rem;
        n1=n1/10;
    }
    cout<<"The product of the digits of the number "<<n<<" is "<<pro;
    return 0;
}