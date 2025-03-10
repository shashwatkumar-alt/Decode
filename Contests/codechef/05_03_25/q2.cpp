#include<bits/stdc++.h>
using namespace std;
void solve(){
    int x,y,z,a,b,c;
    cin>>x>>y>>z>>a>>b>>c;
    int ans = 0;
    if(z>=c){
        ans += c;
        y += (z-c);
    }
    else ans += z;
    if(y>=b){
        ans += b;
        x += (y-b);
    }
    else ans += y;
    if(x>=a){
        ans += a;
    }
    else ans += a;
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}