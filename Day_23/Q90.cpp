#include<iostream>
#include<string>
#include<climits>
#include<vector>
using namespace std;

int main(){
    string str;

    cout<<"Enter a string: ";
    getline(cin, str);

    char ans;

    int freq[256]={0};
    int max_freq=INT_MIN;
    vector<char> unique;
    char ans_character;

    for(int i=0; i<str.length(); i++){
        freq[int(str[i])]++;
        bool flag=true;
        for(int j=0; j<unique.size(); j++){
            if(str[i]==unique[j]){
                flag=false;
                break;
            }
        }
        if(flag!=false){
            unique.push_back(str[i]);
        }
    }

    for(int i=0; i<unique.size(); i++){
        if(freq[unique[i]]>max_freq){
            max_freq=freq[unique[i]];
            ans=char(unique[i]);
        }
    }

    cout<<"The answer is "<<ans;
    return 0;
}