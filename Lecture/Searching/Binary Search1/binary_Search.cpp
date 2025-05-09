#include<bits/stdc++.h>
using namespace std;
// Linear Search.
int Lsearch(vector<int>& arr, int target){                              // TC = O(n)
    int idx = -1;
    for(int i =0; i<arr.size();i++){
        if(arr[i]==target){
            idx = i;
            break;
        }
    }
    return idx;
}
// Binaray Search
int Bsearch(vector<int>& arr, int target){                              // TC = O(log n)
    int l = 0, h=arr.size();
    while(l<h){
        // int mid = (l+h)/2;                                          // here, in this place, we can write
        int mid = l + (h-l)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]>target) h = mid;
        else l = mid+1;
    }
    return -1;
}
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
    // Search
    int lidx = Lsearch(arr,target);
    (lidx != -1) ? cout<<"For Linear Search; the index found at "<<lidx<<endl : cout<<"Target not found"<<endl;
    int bidx = Bsearch(arr,target);
    (bidx != -1) ? cout<<"For Binary Search; the index found at "<<bidx<<endl : cout<<"Target not found"<<endl;
    return 0;
}