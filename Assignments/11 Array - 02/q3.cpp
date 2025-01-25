// Check if the given array is sorted or not

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter Elements : \n";
    int arr[n];
    bool sorted = true;
    for(int i = 0 ; i<n;i++){
        cin>>arr[i];
        if((arr[i] < arr[i-1])&& (i>=1) && sorted == true) sorted = false ;
    }
    if(sorted) cout<<"Sorted Array.";
    else cout<<"Not Sorted Array.";

    return 0;
}