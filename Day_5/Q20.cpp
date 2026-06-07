#include<iostream>
using namespace std;

int main(){
    int n, largestPrimeFactor=-1, Factor;
    cout<<"Enter a number n: ";
    cin>>n;
    if(n<=1){
        cout<<"The number has no prime factors ";
        return 0;
    }
    for(int i=2; i<n; i++){     //starting the loop from 2 because 1 is never a prime factor
        if(n%i==0){
            Factor=i;
            int flag=1;
            for(int j=2; j*j<=Factor; j++){
                if(Factor%j==0){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                largestPrimeFactor=Factor;
            }
        }
    }
    if(largestPrimeFactor==-1){
        largestPrimeFactor=n;
    }
    cout<<"The largest prime factor of the number "<<n<<" is "<<largestPrimeFactor;
    return 0;
}  