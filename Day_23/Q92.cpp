#include<iostream>
#include<string>
#include<climits>
using namespace std;

int main(){
    string str;

    cout<<"Enter a string: ";
    getline(cin, str);

    int freq[256]={0};

    char ans;

    for(int i=0; i<str.length(); i++){
        freq[str[i]]++;
    }

    int max_freq=INT_MIN;

    for(int i=0; i<256; i++){
        if(freq[i]>max_freq){
            max_freq=freq[i];
            ans=i;
        }
    }

    cout<<"The answer is "<<ans;
    return 0;
}