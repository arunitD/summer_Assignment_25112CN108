#include<iostream>
using namespace std;

int sum(int a, int b){
    int sum=a+b;
    return sum;
}
int main(){
    int a, b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"The sum of "<<a<<" and "<<b<<" is "<<sum(a, b);
    return 0;
}