// 1 3 5 4 3 2 0
// return 5 because it is the peak element in the array.


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
    // applying binary search in the array.
    int lo = 1,hi = n-2;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if((arr[mid]>arr[mid+1])&&(arr[mid]>arr[mid-1])){
            cout<<arr[mid];
            return 0;
        }
        else if(arr[mid] > arr[mid+1]) hi = mid-1;
        else lo = mid +1;
    }
    return 0;
}