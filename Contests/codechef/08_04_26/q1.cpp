#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cin>>n;
    if(n>=5){
        int cost = (n*100)-(15*n);
        cout<<cost<<'\n';
    }
    else cout<<n*100<<endl;
    return 0;
}