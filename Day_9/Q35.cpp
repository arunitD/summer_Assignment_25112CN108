#include<iostream>
using namespace std;

int main(){
    char var='A';
    for(int i=0; i<5; i++){
        for(int j=0; j<i+1; j++){
            cout<<var;
        }
        var++;
        cout<<endl;
    }
    return 0;
}