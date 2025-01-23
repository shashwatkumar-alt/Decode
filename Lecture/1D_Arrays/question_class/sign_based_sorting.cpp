//Q. Move all the negative integers to the left and the positive to the right.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array: \n";
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int i = 0;
    int j = n-1;
    while(i<j){
        if(arr[i]<0) i++;
        if(arr[j]>=0) j--;
        if(i>j) break;
        if(arr[i]>=0 && arr[j]<0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // Printing
    for(int i = 0 ; i< n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}