#include<bits/stdc++.h>
using namespace std;
int main() { 
    int a;
    cout<<"Enter the number of rows: ";
    cin>>a;
    for(int i = 0; i<a;i++){
        for(int j = 0; j<a;j++){
            cout<<(char)(65+j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}