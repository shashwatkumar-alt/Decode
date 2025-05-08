// Given an array with N distinct elements, convert the given array to a form where all elements are in the range from 0 to N-1. The order of elements is the same, i.e, 0 is placed in the place of the smallest element, 1 is placed for the seciond smallest elenment, ... N-1 is placed for the largest element.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int arr[] = {19,12,23,8,16};
    int n = 5;
    vector<bool> visited(n,false);
    for(int i =0;i<n;i++){
        int mini = INT_MAX,midx = -1;
        for(int j = 0;j<n;j++){
            if(visited[j]==true) continue;
            if(arr[j]<mini) {
                mini = arr[j];
                midx = j;
            }
        }
        arr[midx] = i;
        visited[midx] = true;
    }
    for(int i = 0; i<n;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}