#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter the nunmber of elements : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements : \n";
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    // first, finding pivot element.
    int pivot = -1;
    int lo = 0,hi = n-1;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1]){
            pivot = mid;
            break;
        }
        else if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            pivot = mid+1;
            break;
        }
        else if(arr[mid]>arr[hi]) lo = mid +1;
        else hi = mid -1;
    }
    
    return 0;
}