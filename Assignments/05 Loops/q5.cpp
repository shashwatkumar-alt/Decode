// Program to print GP series

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n, a,d;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter d : ";
    cin>>d;
    cout<<"Enter n : ";
    cin>>n;
    for(int i = 1; i<=n;i++){
        cout<<a<<" ";
        a = a*d;
    }
    return 0;
}