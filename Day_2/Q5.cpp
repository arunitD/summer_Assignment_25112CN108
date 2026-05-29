#include<iostream>
using namespace std;
int main(){
    int n, n1, rem, sum=0;
    cout<<"Enter a nuber n: ";
    cin>>n;
    n1=n;
    while(n1>0){
        rem=n1%10;
        sum=sum+rem; 
        n1=n1/10;
    }
    cout<<"The sum of the digits of a number n = "<<n<<" is "<<sum;
    return 0;
}