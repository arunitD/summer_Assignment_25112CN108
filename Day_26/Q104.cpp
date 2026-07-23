#include<iostream>
using namespace std;

int main(){
    cout<<"Welcome to the quiz app"<<endl;
    int score=0;
    int ans1;
    int ans2;
    int ans3;
    cout<<"Test yout knowledge by attempting the following question"<<endl;

    cout<<"Q1. what is the capital of india"<<endl;
    cout<<"1. Mumbai"<<endl<<"2. Delhi"<<endl<<"3. Pune"<<endl<<"4. Lucknow"<<endl;
    cin>>ans1;
    if(ans1==2){
        cout<<"Correct answer!";
        score++;
    }else{
        cout<<"Incorrect answer!";
    }
    
    cout<<"Q2. Which formula 1 drive is known as the 'The Iceman'"<<endl;
    cout<<"1. Lewis hamilton"<<endl<<"2. Max verstappen"<<endl<<"3. Kimi Räikkönen"<<endl<<"4. Lando Norris"<<endl;
    cin>>ans2;
    if(ans2==3){
        cout<<"Correct answer!";
        score++;
    }else{
        cout<<"Incorrect answer!";
    }
    
    cout<<"Q3. Which tennis tournament is played on grass courts?"<<endl;
    cout<<"1. US Open"<<endl<<"2. French Open"<<endl<<"3. Australian Open"<<endl<<"4. Wimbledon"<<endl;
    cin>>ans3;
    if(ans3==4){
        cout<<"Correct answer!";
        score++;
    }else{
        cout<<"Incorrect answer!";
    }

    cout<<"Your Final score is "<<score<<endl;
    cout<<"Good job!";


    return 0;
}