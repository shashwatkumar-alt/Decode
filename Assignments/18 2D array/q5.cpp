// WAP to print the row index having the maximum sum.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n,m;
    cout<<"Enter the order of Matrix : ";
    cin>>n>>m;
    int arr[n][m];
    // Input
    cout<<"Enter the matrix : \n";
    for(int i = 0; i<n;i++){
        for(int j= 0; j<m;j++){
            cin>>arr[i][j];
        }
    }
    // Computation
    int maxsum = -1,idx;
    for(int i = 0; i<n;i++){
        int sum = 0;
        for(int j= 0; j<m;j++){
            sum += arr[i][j];
        }
        if(maxsum < sum){
            maxsum = sum;
            idx = i;
        } 
    }
    cout<<idx;
    return 0;
}