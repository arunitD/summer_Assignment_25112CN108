#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    vector<int> arr(n-1);
    for(int i=0; i<n-1; i++){
        cout<<"Enter arr["<<i<<"] : ";
        cin>>arr[i];
    }
    int sum=0;
    int sumOfN=(n*(n+1))/2;
    for(int i=0; i<n-1; i++){
        sum=sum+arr[i];
    }
    cout<<"The missing number is "<<sumOfN-sum;
    return 0;
}