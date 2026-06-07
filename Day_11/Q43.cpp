#include<iostream>
using namespace std;
bool prime(int n, int i=2){
    if(n==1){
        return false;
    }
    if(i>n/2){
        return true;
    }
    if(n%i==0){
        return false;
    }
    return prime(n, i+1);

}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    if(prime(n)){
        cout<<n<<" is prime";
    }else{
        cout<<n<<" is not prime";
    }
    return 0;
}