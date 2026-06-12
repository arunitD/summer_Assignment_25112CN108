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
    int target, found=0;
    cout<<"Enter target you want to search ";
    cin>>target;
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            found=1;
            break;
        }
    }
    if(found==1){
        cout<<"Target found";
    }else{
        cout<<"Target not found";
    }
    return 0;
}