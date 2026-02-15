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
ll cost(const vector<int>& arr) {
    int m = (int)arr.size();
    if (m <= 1) return 0;
    vector<ll> q(m);
    for (int i = 0; i < m; ++i) q[i] = (ll)arr[i] - i;
    ll med = q[m/2];
    ll cost = 0;
    for (int i = 0; i < m; ++i) cost += llabs(q[i] - med);
    return cost;
}
void conquer(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vi a_idx;
    vi b_idx;
    for(int i = 0; i<n;i++){
        if(s[i] == 'a') a_idx.push_back(i);
        else b_idx.push_back(i);
    }
    int ans = min(cost(a_idx),cost(b_idx));
    cout<<ans<<endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}