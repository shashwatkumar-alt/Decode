#include<bits/stdc++.h>
using namespace std;
int main() { 
    long long x;
    cin>>x;
    if(x % 2 == 0){
        cout<<(x/2)<<'\n';
        for(int i = 1 ; i <= (x/2) ; i++) cout<<2<<" ";
    }
    else{
        cout<<(x/2)<<'\n';
        for(int i = 1; i < (x/2) ; i++) cout<<2<<" ";
        cout<<3;
    }
    return 0;
}