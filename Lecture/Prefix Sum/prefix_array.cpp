// Calculate the prefix sum array and display the output.


#include<bits/stdc++.h>
using namespace std;
int main() { 
    cout<<"Enter the number of elements in the array: ";
    int n;
    cin>>n;
    cout<<"Enter elements :\n";
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> pre(n);
    pre[0]= arr[0];
    cout<<pre[0]<<" ";
    for(int i = 1;i<n;i++){
        pre[i] = pre[i-1]+arr[i];
        cout<<pre[i]<<" ";
    }
    return 0;
}