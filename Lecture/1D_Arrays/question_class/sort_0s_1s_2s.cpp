//Q. Sort the array of 0's, 1's and 2's.
// USING THREE POINTER DUTCH FLAG METHOD.
#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    int low = 0, high = n-1,mid=0;
    while(mid<=high){
        if(arr[mid]==0){
            int temp = arr[mid];
            arr[mid] = arr[low];
            arr[low] = temp;

            low++;
            mid++;
        }
        else if(arr[mid]==2){
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            
            high--;
        }
        else {
            mid++;
        }
    }

    // Printing array.
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}