#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n,m;
    cin>>n>>m;
    int mat[n][m];
    cout<<"Enter the elements:\n";
    for(int i = 0 ; i<n;i++){
        for(int j = 0; j<m;j++){
            cin>>mat[i][j];
        }
    }
    int t[n][m];
    for(int i = 0; i <= n/2; i++){
        for(int j = 0; j<= m/2 ; j++){
            t[i][j]= mat[j][i]
        }
    }
    for(int i = 0 ; i<n;i++){
        for(int j = 0; j<m;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}