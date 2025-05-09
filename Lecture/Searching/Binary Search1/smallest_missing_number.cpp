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
    int l = 0,h=arr.size();
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
    return 0;
}