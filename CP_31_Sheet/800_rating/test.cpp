#include<bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        int temp[n+1];
        int maxm = INT_MIN;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        temp[0] = arr[0];
        for(int i=1; i<n; i++){
            temp[i] = arr[i] - arr[i-1];
        }
        temp[n] = (x - arr[n-1])*2;
        for(int i=0; i<=n; i++){
            maxm = max(temp[i],maxm);
        }
        cout<<maxm<<endl;
    }
    return 0;
}