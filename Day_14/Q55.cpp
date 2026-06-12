#include<iostream>
#include<vector>
#include<climits>
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
    int largest=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    int largest2=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]==largest){
            continue;
        }
        if(arr[i]>largest2){
            largest2=arr[i];
        }
    }
    cout<<"The second largest element is: "<<largest2;
    return 0;
}