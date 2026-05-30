#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n1, n2;
    cout<<"Enter the first number n1: ";
    cin>>n1;
    cout<<"Enter the second number n2: ";
    cin>>n2;
    if(n1 <= 0 || n2 <= 0){
        cout << "Please enter positive integers.";
        return 0;
    }
    int big=max(n1,n2);
    int i=1, lcm=0;
    while(true){
        if((big*i)%n1==0 && (big*i)%n2==0){
            lcm=big*i;
            break;
        }
        i++;
    }
    cout<<"The lcm of the numbers "<<n1<<" and "<<n2<<" is "<<lcm;
    return 0;
}