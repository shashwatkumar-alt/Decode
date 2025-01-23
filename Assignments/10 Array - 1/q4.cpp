// Given an array, predict if the array contains duplicates or not.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    bool present = false;
    cout<<"Enter array : \n";
    for(int i = 0; i<n;i++){
        cin>>arr[i];
        if(present == false){
            for(int j = 0; j<i;j++){
                if(arr[i] == arr[j]) present = true;
            }
        }
    }
    if(present) cout<<"Duplicate exists.";
    else cout<<"Duplicate does not exists.";
    return 0;
}