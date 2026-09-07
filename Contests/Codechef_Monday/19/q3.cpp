#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n,m;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n ; i++){
        cin>>arr[i];
    }
    cin>>m;
    for(int i = 0; i<n;i++){
        arr[i] = arr[i]>>m;
        cout<<arr[i]<<" ";
    }
    return 0;
}