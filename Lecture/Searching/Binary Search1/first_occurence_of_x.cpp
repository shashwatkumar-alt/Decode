// Given a sorted array of n elements and a target 'x'. Find the first occurence of x in the array. If x does not exist, return -1.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n,target;
    cout<<"enter the number of elements : ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the sorted array : ";
    //Input
    for(int i = 0 ; i< n; i++) cin>>arr[i];
    cout<<"Enter the target : ";
    cin>>target;
    // Searching
    bool flag = false;
    int l = 0, h = n,idx;
    while(l<=h){
        int mid = l + (h-l)/2;
        if(arr[mid]== target){
            if(arr[mid-1]==target) h = mid-1;
            else{
                idx = mid;
                flag = true;
                break;
            }
        }
        else if(arr[mid]>target) h = mid - 1;
        else l = mid + 1;
    }
    if(flag == false) cout<<"Element not Found";
    else{
        cout<<"The first occurenc of "<<target<<" is at index "<<idx<<endl;
    }
    return 0;
}