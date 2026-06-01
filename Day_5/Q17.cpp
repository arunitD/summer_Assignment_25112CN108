#include<iostream>
using namespace std;

int main(){
    int n, sum=0;
    cout<<"Enter a number n: ";
    cin>>n;
    for(int i=1; i<=n/2; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        cout<<"The number "<<n<<" is a perfect number";
    }else{
        cout<<"The number "<<n<<" is not a perfect number ";
    }
    return 0;
}