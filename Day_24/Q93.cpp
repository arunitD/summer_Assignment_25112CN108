#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1;
    string str2;

    cout<<"Enter two strings ";
    getline(cin, str1);
    getline(cin, str2);

    if(str1.length() != str2.length()){
        cout << "The 2nd string is not a string rotation of the 1st";
        return 0;
    }

    string temp=str1+str1;

    if(temp.find(str2)<temp.length()){
        cout<<"The 2nd string is a string rotation of the 1st ";
    }else{
        cout<<"The 2nd string is not a string rotation of the 1st";
    }

    return 0;
}