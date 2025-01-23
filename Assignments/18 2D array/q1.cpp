// WAP to store 10 at every index of a 2D 5 x 5 matrix.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int arr[5][5];
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            arr[i][j]=10;
        }
    }
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}