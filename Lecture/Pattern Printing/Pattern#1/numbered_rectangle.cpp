#include<bits/stdc++.h>
using namespace std;
int main() { 
    int a, b;
    cout<<"Enter the length: ";
    cin>>a;
    cout<<"Enter the breadth: ";
    cin>>b;
    for(int i = 0; i<a ; i++){
        for(int j = 0; j<b;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}