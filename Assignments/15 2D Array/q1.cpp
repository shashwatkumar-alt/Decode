// Given an m*n integer matrix, if an element is 0, set its entire row and column to 0. You must do it in place.
// Input :-                             Output :-
// 1 1 1                                    1 0 1
// 1 0 1                                    0 0 0
// 1 1 1                                    1 0 1

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int m,n;
    cout<<"Enter m and n : ";
    cin>>m>>n;
    cout<<"Enter Matrix : "<<endl;
    // Input Matrix and check if the elements are zero.
    vector<vector<int>>arr(m,vector<int>(n));
    int comm = 1;
    for(int i = 0; i<m;i++){
        for(int j = 0; j<n;j++){
            cin>>arr[i][j];
            if(arr[i][j]==0){
                arr[i][0] = 0;
                if(j==0) comm = 0;
                else arr[0][j] = 0;
            }
        }
    }
    // Making inner elements 0.
    for(int i = 1;i<m;i++){
        for(int j =1;j<n;j++){
            if(arr[i][0]==0 || arr[0][j]==0) arr[i][j] = 0;
        }
    }
    if(arr[0][0] == 0){
            for(int i = 0;i<n;i++) arr[0][i] = 0;
        }
    if(comm == 0) {
        for(int i = 0; i<m;i++){
            arr[i][0] = 0;
        }
    }
    // Printing the matrix.
    for(int i = 0; i<m;i++){
        for(int j = 0; j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}