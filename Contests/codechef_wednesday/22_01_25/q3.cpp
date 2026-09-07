#include<bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        long long x;
        cin>>n>>x;
        vector <long long> arr(n);
        for(int i = 0; i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        long long mul=0,maxreq = arr[n-1],maxi;
        for(int i = n-1; i >= 0;i--){
            maxi = mul*x+arr[i];
            if(maxreq<maxi) maxreq = maxi;
            mul++;
        }
        cout<<maxreq<<endl;
    }
    return 0;
}