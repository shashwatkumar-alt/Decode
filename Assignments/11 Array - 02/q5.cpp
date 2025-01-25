// Given an array of integers, change the value of all odd indexed elements to its second 
// multiple and increment all even indexed values by 10.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter Elements : \n";
    int arr[n];
    for(int i = 0 ; i<n;i++){
        cin>>arr[i];
        if(i%2 == 0) arr[i] = arr[i] *2;
        else arr[i] += 10;
    }
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}