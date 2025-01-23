// Find the second largest element in the given Array in one pass.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array : \n";
    int max = INT_MIN,smax = INT_MIN;
    for(int i = 0; i<n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            smax = max;
            max = arr[i];
        }
    }
    cout<<smax;
    return 0;
}