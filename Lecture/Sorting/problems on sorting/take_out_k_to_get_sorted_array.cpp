// given an array, arr[] containing 'n' integers, the task is to find an integer (say k) such that after replacing each and every index of the array by |ai - k| where (i belongs to [1,n]), results in a sorted array. If no such integer exists that satisfies the above condition then return -1. Find the range of K.

#include<bits/stdc++.h>
using namespace std;
float max(float a, float b){
    if(a>=b) return a;
    else return b;
}
float min(float a, float b){
    if(a<b) return a;
    else return b;
}
int main() { 
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the unsorted array : ";
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    float kmin = (float)(INT_MIN);
    float kmax = (float)(INT_MAX);
    bool flag  = true;
    for(int i =0; i<n-1;i++){
        if(arr[i]>=arr[i+1]){ // kmin calculation
            kmin = max(kmin,(arr[i+1]+arr[i])/2.0);
        }
        else{ // kmax calculation
            kmax = min(kmax,(arr[i]+arr[i+1])/2.0);
        }
        if(kmin>kmax){
            flag = false;
            break;
        }
    }
    if(flag==false) cout<<-1<<endl;
    else cout<<"K ranges from "<<kmin<<" to "<<kmax;
    return 0;
}