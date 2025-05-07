// Selection sort :- traversing through the loop every time and selecting the minimum element and then swap it at its correct place.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"enter the number of elements : ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the unsorted array : ";
    //Input
    for(int i = 0 ; i< n; i++) cin>>arr[i];
    // Sorting
    for(int i = 0 ; i < n ; i++){
        int mini = arr[i],midx = i;
        for(int j = i ; j < n ; j++){
            if(mini>arr[j]){
                mini = arr[j];
                midx = j;
            }
        }
        swap(arr[i],arr[midx]);
    }
    //Output
    cout<<"Sorted array : ";
    for(auto i : arr) cout<<i<<" ";
    return 0;
}