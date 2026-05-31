#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        int n1, n2, rem, sum=0, count=0;
        n1=i;
        n2=i;
        while(n1>0){
            count++;
            n1/=10;
        }
        while(n2>0){
            rem=n2%10;
            sum+=pow(rem, count);
            n2/=10;
        }
        if(sum==i){
            cout<<i<<endl;
        }
    }
    return 0;
}