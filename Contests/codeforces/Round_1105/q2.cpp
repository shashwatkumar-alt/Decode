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
const ll MOD = 998244353;

ll power(ll base, ll exp, ll mod){
    ll result = 1;
    base %= mod;
    while(exp > 0){
        if(exp & 1) result = result * base % mod;
        base = base * base % mod;
        exp >>= 1;
    }
    return result;
}
void conquer(){
    ll n, m, r, c;
    cin >> n >> m >> r >> c;

    ll f = (r - 1) % MOD * (m%MOD) % MOD + (n- r+1) % MOD * ((c-1) %MOD) %MOD;
    f %= MOD;

    ll exp = (r -1)* m +(n- r+1) * (c - 1);

    cout << power(2, exp, MOD) << "\n";
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}