// Q. WAP to store roll no and marks obtained by 4 students side by side in a matrix.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int arr[4][2];
    for(int i = 0; i<4;i++){
        for(int j = 0; j<2;j++){
            if(j==0) cout<<"Enter Roll No: ";
            else cout<<"Enter Marks: ";
            cin>>arr[i][j];
        }
    }
    //Printing of Roll no and marks.
    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}