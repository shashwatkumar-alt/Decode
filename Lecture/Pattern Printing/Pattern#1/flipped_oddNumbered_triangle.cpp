#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter the length: ";
    cin>> n;
    for(int i = n ; i >= 1 ; i--){
        for(int j = 1 ; j <= i ; j++){
            cout<<(j*2)-1<<" ";
        }
        cout<<endl;
    }
    return 0;
}