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
    int target, count=0;
    cout<<"Enter target: ";
    cin>>target;
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            count++;
        }
    }
    cout<<"The frequency of "<<target<<" is "<<count;
    return 0;
}