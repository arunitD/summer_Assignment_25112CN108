#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, n1, n2, rem, sum=0, count=0;

    cout<<"Enter a number n: ";
    cin>>n;

    n1=n;
    n2=n;

    while(n1>0){
        n1=n1/10;
        count++;
    }

    while(n2>0){
        rem=n2%10;
        sum += (int)round(pow(rem, count));
        n2=n2/10;
    }

    if(sum==n){
        cout<<"The number "<<n<<" is armstrong number";
    }
    else{
        cout<<"The number "<<n<<" is not an armstrong number ";
    }

    return 0;
}