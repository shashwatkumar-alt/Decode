#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter number of elements :";
    cin>>n;
    cout<<"Enter elements :";
    vector<int> arr(n);
    for(int i = 0; i<n;i++) cin>>arr[i];
    int target;
    cout<<"Enter target :";
    cin>>target;

    int lo = 0, hi = n-1, ans = n;

    auto check = [&](int mid){
        if(arr[mid]>=target) return 1;
        else return 0;
    };

    while(lo <= hi){
        int mid = lo + (hi-lo)/2;

        if(check(mid) == 1){
            ans = mid;
            hi = mid - 1;
        }
        else{
            lo = mid + 1;
        }
    }

    cout<<ans<<endl;

    return 0;
}