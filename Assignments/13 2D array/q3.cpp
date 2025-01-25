// Given a matrix 'A' of dimentsion n x m and 2 coordinates (l1,r1) and (l2,r2). Return the sum of the 
// rectangle from (l1,r1) to (l2,r2).

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
    int l1,r1,l2,r2;
    cout<<"Enter L1 and R1 : ";
    cin>>l1>>r1;
    cout<<"Enter L2 and R2 : ";
    cin>>l2>>r2;
    //Computation
    int sum =0;
    for(int i = l1;i<=l2;i++){
        for(int j = r1;j<=r2;j++){
            sum += arr[i][j];
        }
    }
    cout<<"Sum = "<<sum;
    return 0;
}