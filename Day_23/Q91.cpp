#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1;
    string str2;

    
    cout<<"Enter string 1 and string 2 ";
    getline(cin, str1);
    getline(cin, str2);
    
    if(str1.length()!=str2.length()){
        cout<<"Strings are not anagram";
        return 0;
    }


    int freq1[256]={0};
    int freq2[256]={0};
    for(int i=0; i<str1.length(); i++){
        freq1[str1[i]]++;
    }
    for(int i=0; i<str2.length(); i++){
        freq2[str2[i]]++;
    }

    bool flag=true;
    for(int i=0; i<256; i++){
        if(freq1[i]!=freq2[i]){
            flag=false;
            break;
        }
    }

    if(flag){
        cout<<"Strings are anagram";
    }else{
        cout<<"Strings are not anagram";
    }
    return 0;
}