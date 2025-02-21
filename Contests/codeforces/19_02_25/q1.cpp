#include<bits/stdc++.h>
using namespace std;
int main() { 
    int x,y;
    cin>>x>>y;
    x = 100 - x;
    if(y*10>=x) cout<<"YES";
    else cout<<"NO";
    return 0;
}