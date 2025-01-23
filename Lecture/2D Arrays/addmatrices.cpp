// Q. WAP to add two matrices.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n,m;
    cout<<"Enter the order of matrix : ";
    cin>>n>>m;
    int mat1[n][m];
    int mat2[n][m];
    cout<<"Enter the elements of 1st Matrix :\n";
    for(int i = 0 ; i<n;i++){
        for(int j = 0; j<m;j++){
            cin>>mat1[i][j];
        }
    }
    cout<<"Enter the elements of 2nd Matrix :\n";
    for(int i = 0 ; i<n;i++){
        for(int j = 0; j<m;j++){
            cin>>mat2[i][j];
        }
    }
    //Adding + Printing
    for(int i = 0 ; i<n;i++){
        for(int j = 0; j<m;j++){
            cout<<mat1[i][j]+mat2[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}