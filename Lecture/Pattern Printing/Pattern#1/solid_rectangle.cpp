#include<bits/stdc++.h>
using namespace std;
int main() { 
    int a,b;
    cout<<"Enter the number of rows: ";
    cin>>a;
    cout<<"Enter the number of columns: ";
    cin>>b;
    for(int i = 0; i<a;i++){
        for(int j = 0; j<b;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}