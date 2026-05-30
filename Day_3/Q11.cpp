#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n1, n2;
    cout<<"Enter the 1st number n1: ";
    cin>>n1;
    cout<<"Enter the 2nd number n2: ";
    cin>>n2;
    if(n1 <= 0 || n2 <= 0){
        cout << "Please enter positive integers.";
        return 0;
    }
    int div1[n1], div2[n2];
    int idx1=0;
    for(int i=0; i<n1; i++){
        if(n1%(i+1)==0){
            div1[idx1]=i+1;
            idx1++;
        }
    }
    int idx2=0;
    for(int j=0; j<n2; j++){
        if(n2%(j+1)==0){
            div2[idx2]=j+1;
            idx2++;
        }
    }
    int idx3;
    if(n1>=n2){
        idx3=n1;
    }
    else{
        idx3=n2;
    }
    int gcd[idx3];
    int idx4=0;
    for(int i=0; i<idx1; i++){
        for(int j=0; j<idx2; j++){
            if(div1[i]==div2[j]){
                gcd[idx4]=div1[i];
                idx4++;
                break;
            }
        }
    }
    int gcdValue=INT_MIN;
    for(int i=0; i<idx4; i++){
        if(gcd[i]>gcdValue){
            gcdValue=gcd[i];
        }
    }
    cout<<"The greatest common divisor of the numbers "<<n1<<" and "<<n2<<" is "<<gcdValue;
    return 0;
}