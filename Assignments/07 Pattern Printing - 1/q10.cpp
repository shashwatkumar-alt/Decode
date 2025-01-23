//  1
//  2 1
//  3 2 1
//  4 3 2 1

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i = 0; i<n;i++){
        for(int j = i ; j>= 0;j--){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}