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
    ll n;
    cin>>n;
    vll a(n), b(n);
    map<ll,ll> mp;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    cin>>b[0];
    for(int i = 1; i<n ;i++) {
        cin>>b[i];
        b[i] += b[i-1];
    }
    ll curr = 0,maxi = 0;
    for(auto &it : mp){
        auto at = lower_bound(b.begin(),b.end(),(n-curr));
        int levels = distance(b.begin(),at)+1;
        ll score = levels * it.first;
        maxi = max(maxi, score);
        curr += it.second;
    }
    cout<<maxi<<'\n';
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}