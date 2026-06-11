#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    int even=0;
    int odd=0;
    cout<<"Enter n: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cout<<"Enter arr["<<i<<"] ";
        cin>>arr[i];
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    cout<<"Even terms = "<<even<<" Odd terms = "<<odd;
    return 0;
}