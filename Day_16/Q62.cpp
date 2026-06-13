#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cout<<"Enter arr["<<i<<"] : ";
        cin>>arr[i];
    }
    int freq=0, ans;
    for(int i=0; i<n; i++){
        int curFreq=0;
        for(int j=0; j<n; j++){
            if(arr[j]==arr[i]){
                curFreq++;
            }
        }
        if(curFreq>freq){
            freq=curFreq;
            ans=arr[i];
        }
    }
    cout<<"The number with max frequency is "<<ans;
    return 0;
}