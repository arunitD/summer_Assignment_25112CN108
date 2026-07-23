#include<iostream>
using namespace std;

int main(){
    int pin=1234;
    int balance=5000;

    int entered_pin;
    cout<<"Enter the pin: ";
    cin>>entered_pin;

    int button;
    int withdrawing_amount;
    int deposit_amount;

    if(entered_pin==pin){

        cout<<"to check balance press 1"<<endl;
        cout<<"to withdraw money press 2"<<endl;
        cout<<"to deposit money press 3"<<endl;
        cin>>button;

        if(button==1){
            cout<<balance;
        }else if(button==2){
            cout<<"Enter the amount you want to withdraw: ";
            cin>>withdrawing_amount;
            if(withdrawing_amount<=balance){
                balance-=withdrawing_amount;
                cout<<balance;
            }else{
                cout<<"Insufficient balance";
            }
        }else if(button==3){
            cout<<"Enter amount you want to deposit ";
            cin>>deposit_amount;
            balance+=deposit_amount;
            cout<<balance;
        }else{
            cout<<"Invalid choice";
        }
    }else{
        cout<<"Incorrect pin";
    }



    
    return 0;
}