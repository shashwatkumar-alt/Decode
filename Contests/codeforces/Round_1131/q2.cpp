#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<vector<ll>> vvll;
typedef pair<int,int> pi;
typedef vector<vector<char>> vvc;
typedef vector<vector<int>> vvi;
typedef pair<ll,ll> pll;
static const bool fastIO = [](){
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    return true;
}();
void conquer(){
    int x,y,z;
    cin>>x>>y>>z;
    int maxi = max({x,y,z});
    if(maxi == x){
        string ans(x+y+z,'P');
        cout<<ans<<'\n';
    }
    else if(maxi == y){
        string ans(x+y+z,'R');
        cout<<ans<<'\n';
    }
    else{
        string ans(x+y+z,'S');
        cout<<ans<<'\n';
    }
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}