#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    int sum=0;
    cout<<"Enter n: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cout<<"Enter arr["<<i<<"] ";
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"The sum of arrays is "<<sum<<endl;
    float avg=(float)sum/(float)n;
    cout<<"The average of arrays is "<<avg;
    return 0;
}