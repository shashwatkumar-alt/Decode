#include<bits/stdc++.h>
using namespace std;

int wins(vector<int>& arr, int n , int k){
    for(int i = 0; i< n; i++){
        int count = 0;
        for (int j = 0; j < n; j++){
            if(abs(arr[i]-arr[j])%k!=0  && i!=j){
                count++;
            }
        }
        if(count==n-1) return i;
    }
    return -1;
}

int main() { 
    int t;
    cin>>t;
    while(t>0){
        int n,k;
        cin>>n>>k;
        vector<int> arr;
        // Input taken.
        for(int i = 0; i<n ; i++){
            int j;
            cin>>j;
            arr.push_back(j);
        }
        // 
        int ans = wins(arr,n,k);
        if(ans != (-1)){
            cout<<"YES"<<endl<<ans+1<<endl ;
        }
        else{
            cout<<"No."<<endl;
        }

        t--;
    }
    return 0;
}