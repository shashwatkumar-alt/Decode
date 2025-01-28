// Write a program to print the matrix in wave form.

// 1 2 3       7 4 1
// 4 5 6       2 5 8
// 7 8 9       9 6 3
// 

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n,m;
    cout<<"Enter the rows and columns : ";
    cin>>n>>m;
    int arr[n][m];
    // Input.
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    //printing the matrix
    for(int i = 0; i<m;i++){
        for(int j = 0; j<n;j++){
            if(i%2==0){
                cout<<arr[j][i]<<" ";
            }
            else{
                cout<<arr[n-1-j][i]<<" ";
            }
        }
    }
    return 0;
}