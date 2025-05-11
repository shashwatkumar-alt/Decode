// 1. Which of the following is true about selection sort:
// In each iteration we find the minimum element in the unsorted part of the array.
// In each iteration we find the index of the minimum element in the unsorted part of the array.
// We swap the index of the minimum element with the first element of the array.
// It takes O(n^2) swaps.


// 2. Which of the following examples represent the worst case input for an insertion sort?
// array in sorted order
// large array
// normal unsorted array
// array sorted in reverse order


// 3. How many passes would be required during insertion sort to sort an array of 5 elements?
// 1
// Depends on order of elements
// 4
// 5


// Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of two numbers formed from digits of the array. Please note that all digits of the given array must be used to form the two numbers.

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
    sort(arr.begin(),arr.end());
    // Forming Number
    int num1 =0 , num2 = 0;
    for(int i = 0; i<n;i++){
        if(i%2==0) num1 = num1*10 + arr[i];
        else num2 = num2 *10 + arr[i];
    }
    cout<<"num 1 = "<<num1<<" num 2 = "<<num2<<endl;
    cout<<"sum = "<<num1+num2;
    return 0;
}