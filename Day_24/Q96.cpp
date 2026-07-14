#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string ";
    getline(cin,str);

    string no_duplicate;
    for(int i=0; i<str.length(); i++){
        bool flag=true;
        for(int j=0; j<no_duplicate.size(); j++){
            if(str[i]==no_duplicate[j]){
                flag=false;
                break;
            }
        }
        if(flag){
            no_duplicate+=str[i];
        }
    }

    cout<<no_duplicate;
    
    return 0;
}