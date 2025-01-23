//Q. WAP to print the transpose of matrix entered by the user and store it in a new matrix.

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
    for(int i = 0 ; i<m;i++){
        for(int j = 0; j<n;j++){
            cout<<mat[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}