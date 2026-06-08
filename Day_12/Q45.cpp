#include<iostream>
using namespace std;

bool palindrome(int n){
    int n1=n;
    int sum=0;
    while(n1>0){
        int rem=n1%10;
        sum=sum*10+rem;
        n1=n1/10;
    }
    if(sum==n){
        return true;
    }else{
        return false;
    }
}
int main(){
    int n;
    cout<<"Enter n";
    cin>>n;
    if(palindrome(n)){
        cout<<n<<" is palindrome";
    }else{
        cout<<n<<" is not palindrome";
    }
    return 0;
}