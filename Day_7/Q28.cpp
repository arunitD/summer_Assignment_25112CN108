#include<iostream>
using namespace std;

int rev=0;

int reverseNum(int n){
    if(n==0){
        return rev;
    }
    rev=rev*10+n%10;
    return reverseNum(n/10);
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    cout<<"The reverse of the number "<<n<<" is "<<reverseNum(n);
    return 0;
}