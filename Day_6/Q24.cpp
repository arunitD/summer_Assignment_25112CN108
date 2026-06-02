#include<iostream>
using namespace std;

int main(){
    int x, n, ans=1;
    cout<<"Enter the number x: ";
    cin>>x;
    cout<<"Enter the power n: ";
    cin>>n;
    for(int i=0; i<n; i++){
        ans=ans*x;
    }
    cout<<"The value of "<<x<<" to the power "<<n<<" is "<<ans;
    return 0;
}