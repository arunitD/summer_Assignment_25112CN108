#include<iostream>
using namespace std;
int main(){
    int n, flag=1;
    cout<<"Enter a number n: ";
    cin>>n;
    if(n<=1){
        cout<<n<<" is not a prime number ";
        return 0;
    }
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"The number "<<n<<" is a prime number ";
    }else{
        cout<<"The number "<<n<<" is not a prime number";
    }
    return 0;
}