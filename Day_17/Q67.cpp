#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n1, n2;
    cout<<"Enter the value of n1 and n2";
    cin>>n1>>n2;
    vector<int> arr1(n1);
    vector<int> arr2(n2);
    for(int i=0; i<n1; i++){
        cout<<"Enter arr1["<<i<<"]";
        cin>>arr1[i];
    }
    for(int i=0; i<n2; i++){
        cout<<"Enter arr2["<<i<<"]";
        cin>>arr2[i];
    }
    vector<int> arr3(0);
    for(int i=0; i<n2; i++){
        int found=0;
        int repeat=0;
        for(int j=0; j<n1; j++){
            if(arr2[i]==arr1[j]){
                found=1;
                break;
            }
        }
        for(int k=0; k<arr3.size(); k++){
            if(arr3[k]==arr2[i]){
                repeat=1;
                break;
            }
        }
        if(found==1&&!repeat){
            arr3.push_back(arr2[i]);
        }
    }
    

    for(int i=0; i<arr3.size(); i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}