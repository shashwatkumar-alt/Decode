#include<bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int arr[n];
        int sum = 0;
        for(int i = 0 ; i<n;i++){
            cin>>arr[i];
            sum += arr[i];
        }
        int count = 0;
        for(int i = 0 ; i<n-1 ;i++){
            for(int j = i; j<n; j++){
                if(sum-(arr[i]+arr[j])<=y && sum-(arr[i]+arr[j])>=x) count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}