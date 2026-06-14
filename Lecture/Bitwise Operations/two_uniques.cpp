// given an integer array nums, in which exacly two elements appear only once and all other elements appear exactly twice. Find the two elements that appear only once.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    cout<<"Enter the number of elements (even only) : ";
    int n;
    cin>>n;
    vector<int> arr(n);
    int res = 0;
    for(int i = 0; i < n ; i++){
        cin>>arr[i];
        res ^= arr[i];
    }
    int k = __builtin_ffs(res), res1 = 0;
    for(int i = 0; i<n; i++){
        int num = arr[i];
        if((num>>k)&1 == 1) res1 ^= num;
    }
    cout<<res1<<" ";
    res1 ^= res;
    cout<<res1<<endl;
    return 0;
}