#include<iostream>
#include<string>
#include<climits>

using namespace std;

int main(){
    string str;
    cout<<"Enter a string ";
    getline(cin,str);

    string ans;

    int max_count=INT_MIN;

    
    for(int i=0; i<str.length(); i++){

        if(str[i] == ' ')
        continue;
        
        string word;
        int count=0;
        char ch=str[i];
        while(i<str.length() && str[i]!=' '){
            count++;
            word+=str[i];
            i++;
        }
        if(count>max_count){
            max_count=count;
            ans=word;
        }

    }
    cout<<"The longest word is "<<ans;

    return 0;
}