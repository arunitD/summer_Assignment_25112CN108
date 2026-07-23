#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    int guess;
    bool flag=true;


    srand(time(0));
    int x=rand()%100+1;

    
    while(flag){

        cout<<"Enter a number you have guessed ";
        cin>>guess;


        if(guess>x){
            cout<<"too high! ";
        }
        else if(guess<x){
            cout<<"too low! ";
        }else{
            cout<<"Congratulations";
            flag=false;
        }
    }
    return 0;
}