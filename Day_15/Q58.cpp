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
    int point;
    point=arr[0];
    for(int i=0; i<n-1; i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=point;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}