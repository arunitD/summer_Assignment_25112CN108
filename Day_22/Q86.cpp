#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    int words=0;
    for(int i=0; i<str.length(); i++){
       int length=0;
       while(i<str.length() && str[i]!=' ' ){
        length++;
        i++;
       }
       if(length>0){
        words++;
        i--;
       }
    }
    cout<<"The number of words are "<<words;
    return 0;
}