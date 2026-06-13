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
    int givenSum;
    cout<<"Enter the sum: ";
    cin>>givenSum;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==givenSum){
                cout<<"The pair is ("<<arr[i]<<","<<arr[j]<<")"<<endl;
            }
        }
    }
    return 0;
}