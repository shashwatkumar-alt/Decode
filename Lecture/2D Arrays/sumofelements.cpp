// Q. WAP to find sum of elements of 2D array.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n,m;
    cout<<"Enter rows:";
    cin>>n;
    cout<<"Enter columns:";
    cin>>m;
    int arr[n][m];
    int sum = 0;
    cout<<"Enter elements:\n";
    for(int i = 0; i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            sum+=arr[i][j];
        }
    }
    cout<<sum;
    
    return 0;
}