#include<iostream>
using namespace std;

int main(){
    int n, n1, fact, sum=0;
    cout<<"Enter a number n: ";
    cin>>n;
    n1=n;
    while(n1>0){
        int rem=n1%10;
        fact=1;
        for(int j=1; j<=rem; j++){
            fact*=j;
        }
        sum+=fact;
        n1/=10;
    }
    if(sum==n){
        cout<<"The number "<<n<<" is a strong number ";
    }else{
        cout<<"The number "<<n<<" is not a strong number ";
    }
    return 0;
}