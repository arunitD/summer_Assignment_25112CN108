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
    vector<int> arr3(n1);
for(int i=0; i<n1; i++){
    arr3[i]=arr1[i];
}

for(int i=0; i<n2; i++){
    bool flag=true;
    for(int j=0; j<arr3.size(); j++){
        if(arr2[i]==arr3[j]){
            flag=false;
            break;
        }
    }
    if(flag){
        arr3.push_back(arr2[i]);
    }    
}

for(int i=0; i<arr3.size(); i++){
    cout<<arr3[i]<<" ";
}
    return 0;
}