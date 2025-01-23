// Q. Take two rectangular matrices as input and print its multiplication.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    // Input
    int n1,m1,n2,m2;
    cout<<"For Matrix 1:\nRows: ";
    cin>>n1;
    cout<<"Columns: ";
    cin>>m1;
    cout<<"For Matrix 2:\nRows: ";
    cin>>n2;
    cout<<"Columns: ";
    cin>>m2;

    if(m1==n2){
        cout<<"Enter the matrix 1: \n";
        int mat1[n1][m1];
        for(int i = 0; i<n1;i++){
            for(int j = 0; j<m1;j++){
                cin>>mat1[i][j];
            }
        }
        int mat2[n2][m2];
        cout<<"Enter the matrix 2: \n";
        for(int i = 0; i<n2;i++){
            for(int j = 0; j<m2;j++){
                cin>>mat2[i][j];
            }
        }
        // Multiplication
        int res[n1][m2];
        for(int i = 0; i<n1;i++){
            for(int j = 0; j<m2;j++){
                res[i][j]=0;
                for(int k = 0; k< n2;k++){
                    res[i][j] += mat1[i][k]+mat2[k][j];
                }
            }
        }
        // Printing
        cout<<"resultant matrix :\n";
        for(int i = 0; i<n1;i++){
            for(int j = 0; j<m2;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }
    else cout<<"Matrices cannot be multiplied.\n";

    return 0;
}