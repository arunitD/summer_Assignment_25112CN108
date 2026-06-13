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
    int j=0; 
    for(int k=0; k<n; k++){
        if(arr[k]!=0){
            arr[j]=arr[k];
            j++;
        }
    }
    while(j<n){
        arr[j]=0;
        j++;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
    