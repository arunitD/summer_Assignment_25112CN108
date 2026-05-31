#include<iostream>
using namespace std;
int main(){
    int n, t1=0, t2=1, nxt;
    cout<<"Enter a number n: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<t1<<" ";
        nxt=t1+t2;
        t1=t2;
        t2=nxt;
    }
    return 0;
}