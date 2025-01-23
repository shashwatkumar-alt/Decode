// Find the minimum value out of all elements in the array.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array : \n";
    int min = INT_MAX;
    for(int i = 0; i<n;i++){
        cin>>arr[i];
        if(arr[i]<min) min = arr[i];
    }
    cout<<min;
    return 0;
}