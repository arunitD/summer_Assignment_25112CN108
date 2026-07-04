#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    string ans;
    for(int i=0; i<str.length(); i++){
       bool flag=false;
       while(i<str.length() && str[i]!=' ' ){
        flag=true;
        ans+=str[i];
        i++;
       }
       i--;
    }
    cout<<"After removing all the spaces the string left is= "<<ans;
    return 0;
}