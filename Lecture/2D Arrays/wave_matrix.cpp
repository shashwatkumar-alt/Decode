// Q. WAP to print the matrix in wave form.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int m,n;
    cout<<"Enter Rows and Column :";
    cin>>m>>n;
    // Wave printing
    bool inc = false;
    int counter = 0;
    int res[m][n];
    for(int i = 0; i<m;i++){
        for(int j = 0; j<n;j++){
            if(inc == false ){
                res[i][j]= ++counter;
                if(j == n-1) {
                    counter += n;
                    inc = !inc;
                }
            }
            else{
                res[i][j]= counter--;
                if(j == n-1) {
                    counter += n;
                    inc = !inc;
                }
            }
        }
    }
    // Printing
    for(int i = 0; i<m;i++){
        for(int j = 0; j< n;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}