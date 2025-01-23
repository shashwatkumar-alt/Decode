// WAP to find largest element of given 2D Array.

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
    int max = arr[0][0];
    for(int i = 0; i<n;i++){
        for(int j= 0; j<m;j++){
            if(max<arr[i][j]) max = arr[i][j];
        }
    }
    cout<<max;
    return 0;
}