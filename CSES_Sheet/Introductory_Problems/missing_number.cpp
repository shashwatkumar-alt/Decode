#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cin>>n;
    vector<int> arr(n-1);
    for(int i = 0; i<n-1;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int lo = 0,hi = n-1;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==(mid+1)) lo = mid+1;
        else hi = mid-1;
    }
    cout<<lo+1;
    return 0;
}