// Print first ‘n’ fibonacci numbers.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int a = 1, b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i = 2;i<n;i++){
        int c = a+b;
        cout<<c<<" ";
        a = b;
        b = c;
    }
    return 0;
}