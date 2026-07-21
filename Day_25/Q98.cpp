#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1;
    string str2;

    string unique1;
    string unique2;
    
    string common;

    cout<<"Enter a string ";
    getline(cin, str1);
    cout<<"Enter a string ";
    getline(cin, str2);

    for(int i=0; i<str1.length(); i++){
        int j=0;
        bool flag=true;
        while(j<unique1.length()){
            if(unique1[j]==str1[i]){
                flag=false;
                break;
            }
            j++;
        }
        if(flag){
            unique1+=str1[i];
        }
    }


    for(int i=0; i<str2.length(); i++){
        int j=0;
        bool flag=true;
        while(j<unique2.length()){
            if(unique2[j]==str2[i]){
                flag=false;
                break;
            }
            j++;
        }
        if(flag){
            unique2+=str2[i];
        }
    }

    int len, lenOpp;
    if(unique1.length()<=unique2.length()){
        len=unique1.length();
        lenOpp=unique2.length();
        for(int i=0; i<len; i++){
            int j=0;
            while(j<lenOpp){
                if(unique1[i]==unique2[j]){
                    common+=unique1[i];
                    break;
                }
                j++;
            }
        }
    }else{
        len=unique2.length();
        lenOpp=unique1.length();
        for(int i=0; i<len; i++){
            int j=0;
            while(j<lenOpp){
                if(unique2[i]==unique1[j]){
                    common+=unique2[i];
                    break;
                }
                j++;
            }
        }
    }

    cout<<common;


    return 0;
}