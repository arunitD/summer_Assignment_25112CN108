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
    vector<int> arr2;
    for(int i=0; i<n; i++){
        bool duplicate=false;
        for(int k=0; k<i; k++){
            if(arr[k]==arr[i]){
                duplicate=true;
                break;
            }
        }
        if(duplicate!=true){
            arr2.push_back(arr[i]);
        }
    }
    for(int i=0; i<arr2.size(); i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}