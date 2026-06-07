#include<iostream>
using namespace std;

int main(){
    for(int i=0; i<5; i++){
        int x=1;
        int y=i;
        for(int j=1; j<5-i; j++){
            cout<<' ';
        }
        for(int j=0; j<i+1; j++){
            cout<<x;
            x++;
        }
        for(int j=0; j<i; j++){
            cout<<y;
            y--;
        }
        cout<<endl;
    }
    return 0;
}