#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;

    cout<<"Enter a string: ";
    getline(cin, str);

    int freq[256]={0};

    char ans;

    for(int i=0; i<str.length(); i++){
        freq[int(str[i])]++;
    }
    for(int i=0; i<str.length(); i++){
        if(freq[(int)str[i]]==1){
            ans=str[i];
            break;
        }
    }

    cout<<"The answer is "<<ans;
    return 0;
}