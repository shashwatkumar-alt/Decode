// Q. WAP to find largest element of given 2D array of integers.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int arr[3][3];
    cout<<"Enter the elements of matrix: \n";
    for(int i = 0 ; i<3;i++){
        for(int j = 0; j<3;j++){
            cin>>arr[i][j];
        }
    }
    int maxi = arr[0][0];
    for(int i = 0 ; i<3;i++){
        for(int j = 0; j<3;j++){
            if(arr[i][j]>maxi) maxi = arr[i][j];
        }
    }
    cout<<"The largest element is "<<maxi;

    return 0;
}