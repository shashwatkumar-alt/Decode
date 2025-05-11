// 1. Which of the following(s) is/are true about bubble sort:
// It is stable sort                                                                    -> T
// It has a worst case space complexity of O(n)                                         -> F
// It involves swapping of adjacent elements                                            -> T
// After each iteration, the greatest element is placed at the end of the array.        -> T

// 2. What will the following array look like after one iteration of bubble sort [1,6,2,5,4,3].
// [1,3,2,4,5,6]
// [1,2,3,4,5,6]
// [1,2,5,4,3,6]                                                                        -> T
// [1,2,4,5,3,6]

// 3. In which case does bubble sort works in the most efficient way:
// When the array is sorted in increasing order                                         -> T
// When the array is sorted partially
// When the array is sorted in decreasing order.
// When the array is nearly sorted.

// 4. Sort the array in descending order using Bubble Sort.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    vector<int>arr(n);
    //Input
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    // Sorting
    for(int i = n; i>0 ;i--){
        for(int j = 0;j<i;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    // Printing Array
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}