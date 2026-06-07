#include<iostream>
using namespace std;
int max(int a, int b){
    int max;
    a>b? max=a : max=b;
    return max;
}
int main(){
    int a, b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    cout<<"Max is: "<<max(a,b);
    return 0;
}