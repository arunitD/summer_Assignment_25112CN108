#include<iostream>
using namespace std;
int main(){
    int n, t1=0, t2=1, nxt;
    cout<<"enter the term you wanna know ";
    cin>>n;
    if(n <= 0){
        cout << "Invalid term";
        return 0;
    }
    int fibo[n];
    for(int i=0; i<n; i++){
        fibo[i]=t1;
        nxt=t1+t2;
        t1=t2;
        t2=nxt;
    }
    cout<<"The "<<n<<"th term is "<<fibo[n-1];
    return 0;
}