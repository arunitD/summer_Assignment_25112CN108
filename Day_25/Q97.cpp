#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n1, n2;
    cout<<"Enter the size of arr1 and arr2";
    cin>>n1>>n2;
    vector<int> arr1(n1+n2, 0);
    vector<int> arr2(n2, 0);
    cout<<"Enter the elements of arr1";
    for(int i=0; i<n1; i++){
        cin>>arr1[i];
    }
    cout<<"Enter the elements of arr2";
    for(int i=0; i<n2; i++){
        cin>>arr2[i];
    }
    int idx=n1+n2-1, i=n1-1, j=n2-1;
    while(j>=0 && i>=0){
        if(arr1[i]>=arr2[j]){
            arr1[idx]=arr1[i];
            i--;
            idx--;
        }else{
            arr1[idx]=arr2[j];
            j--;
            idx--;
        }

    }
    while(j>=0){
        arr1[idx]=arr2[j];
        j--;
        idx--;
    }

    for(int i=0; i<n1+n2; i++){
        cout<<arr1[i]<<" ";
    }

    
    return 0;
}