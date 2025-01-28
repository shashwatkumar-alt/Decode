// Write a program to rotate the matrix by 90 degrees anti-clockwise.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i = n-1; i>=0;i--){
        for(int j = 0; j<m;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}