// Given a sorted array of non-negative distinct integers, find the smallest missing non-negative element in it.

#include<bits/stdc++.h>
using namespace std;

int iterative(vector<int>& arr){
    int ans = -1;
    bool flag = true;
    for(int i = 0; i<arr.size();i++){
        if(arr[i]!=i) {
            break;
            flag = false;
        }
        ans++;
    }
    if(flag == true) ans++;
    return ans;
}

int bsearch(vector<int>& arr){
    int n = arr.size();
    int lo = 0,hi = n - 1;


    int ans = -1;
    auto check = [&](int idx){
        return arr[idx] != idx;
    };
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(check(mid)){
            ans = mid;
            hi = mid - 1;
        }
        else lo = mid +1;  
    }
    return ans;

}

int main() { 
    int n,target;
    cout<<"enter the number of elements : ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the array : ";
    //Input
    for(int i = 0 ; i< n; i++) cin>>arr[i];
    // Finding the missing number.
    sort(arr.begin(),arr.end());
    int ans = iterative(arr);
    cout<<ans<<'\n';
    ans = bsearch(arr);
    cout<<ans<<'\n';
    return 0;
}