#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n1, n2;
    cout<<"Enter the size of two arrays: ";
    cin>>n1>>n2;
    vector<int> arr1(n1);
    vector<int> arr2(n2);
    
    for(int i=0; i<n1; i++){
        cout<<"Enter arr1["<<i<<"]: ";
        cin>>arr1[i];
    }
    for(int i=0; i<n2; i++){
        cout<<"Enter arr2["<<i<<"]: ";
        cin>>arr2[i];
    }
    //to merge these two arrays
    int n3=n1+n2;
    vector<int> arr3(n3);
    int j=0;
    for(int i=0; i<n3; i++){
        if(i<n1){
            arr3[i]=arr1[i];
        }else{
            arr3[i]=arr2[j++];
        }
    }

    for(int i=0; i<n3; i++){
        cout<<arr3[i]<<" ";
    }

    return 0;
}