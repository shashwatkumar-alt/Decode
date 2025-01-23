#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    int f = n * factorial(n-1);
    return f;
}
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        int fact = factorial(n);
        cout<<fact<<endl;
    }
    return 0;
}