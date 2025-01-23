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
    // Printing in wave manner
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(i%2==0){
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<arr[i][m-1-j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}