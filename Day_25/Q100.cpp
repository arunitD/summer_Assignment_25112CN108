#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<" How many names you want to enter? ";
    cin>>n;
    vector<string> str(n);
    cout<<"Enter the words you want to enter ";
    for(int i=0; i<n; i++){
        cin>>str[i];
    }
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(str[i].length()>str[j].length()){
                swap(str[i], str[j]);
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<str[i]<<"  ";
    }
    return 0;
}