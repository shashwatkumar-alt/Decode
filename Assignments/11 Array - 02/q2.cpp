// WAP to find the largest three elements in the array.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter Elements : \n";
    int arr[n];
    cin>>arr[0];
    for(int i = 1 ; i<n;i++){
        cin>>arr[i];
    }
    int min = arr[0], smin = arr[1], tmin = arr[2];
    for(int i = 1 ; i<n;i++){
        if(arr[i]<min){
            tmin = smin;
            smin = min;
            min = arr[i];
        }
    }
    cout<<min<<"  "<<smin<<"  "<<tmin;
    return 0;
}