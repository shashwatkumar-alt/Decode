// Check if the given array is almost sorted. (elements are at-most one position away)

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    vector<int>arr(n);
    //Input
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    // Sorting
    int count=0;
    for(int i = n; i>0 ;i--){
        for(int j = 0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                count++;
            }
        }
    }
    if(count<=1) cout<<"Almost Sorted.";
    else cout<<"Not Sorted.";
    return 0;
}