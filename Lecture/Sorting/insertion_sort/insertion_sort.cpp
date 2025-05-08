#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter the array : ";
    int arr[n];
    for(int i = 0; i<n;i++) cin>>arr[i];
    // Insertion Sort
    for(int i = 1; i<n;i++){
        int j =i;
        // while(j>=1){                         // This whole block of code can be rewritten as
        //     if(arr[j]>=arr[j-1]) break;
        //     else{
        //         int temp = arr[j];
        //         arr[j] = arr[j-1];
        //         arr[j-1] = temp;
        //         // decrement.
        //         j--;
        //     }
        // }
        while(j>=1 && arr[j]<=arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(auto ele : arr) cout<<ele<<" ";
    return 0;
}

// For insertion sort, Time complexity :- 
    // worst case = O(n^2) and stable
    // avg case = O(n^2) and stable
    // Best case = O(n) and stable