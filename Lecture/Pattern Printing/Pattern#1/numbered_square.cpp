#include<bits/stdc++.h>
using namespace std;
int main() { 
    int a;
    cout<<"Enter the side: ";
    cin>>a;
    for(int i = 0 ; i < a ; i++){
        for(int j = 0 ; j < a ; j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}