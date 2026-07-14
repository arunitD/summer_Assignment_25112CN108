#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string ";
    getline(cin,str);

    string ans;

    for(int i=0; i<str.length(); i++){
        int count=0;
        char ch=str[i];
        while(i<str.length() && str[i]==ch){
            count++;
            i++;
        }

        if(count>1){
            ans+=ch;
            ans+=to_string(count);
        }else{
            ans+=ch;
        }
        i--;
    }

    cout<<ans;
    
    return 0;
}