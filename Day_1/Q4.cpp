#include<iostream>
using namespace std;

int main(){
    int n,n1, count=0;
    cout<<"Enter a number n: ";
    cin>>n;
    n1=n;
    while(n1>0){
        n1=n1/10;
        count++;
    }
    cout<<"The number of digits in the number "<<n<<" = "<<count; 
    return 0;
}