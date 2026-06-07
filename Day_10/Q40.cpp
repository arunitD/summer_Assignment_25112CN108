#include<iostream>
using namespace std;

int main(){
    char z='A';
    for(int i=0; i<5; i++){
        char x='A';
        for(int j=1; j<5-i; j++){
            cout<<' ';
        }
        for(int j=0; j<i; j++){
            cout<<x;
            x++;
        }
        for(char j=z; j>='A'; j--){
            cout<<j;
        }
        z++;
        cout<<endl;
    }
    return 0;
}