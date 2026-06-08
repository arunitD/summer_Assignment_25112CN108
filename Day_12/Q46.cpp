#include<iostream>
#include<cmath>
using namespace std;

bool armstrong(int n){
    int n1=n;
    int n2=n;
    int digits=0;
    int sum=0;
    while(n1>0){
        n1/=10;
        digits++;
    }     
    while(n2>0){
        int rem=n2%10;
        sum=sum+pow(rem, digits);
        n2/=10;
    }
    if(sum==n){
        return true;
    }else{
        return false;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    if(armstrong(n)){
        cout<<n<<" is armstrong";
    }else{
        cout<<n<<" is not armstrong";
    }
    return 0;
}