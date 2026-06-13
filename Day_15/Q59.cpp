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
    int pt=arr[n-1];
    for(int i=n-1; i>0; i--){
        arr[i]=arr[i-1];
    }
    arr[0]=pt;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}