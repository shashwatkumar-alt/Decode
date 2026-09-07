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
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    ll K = 0;
    ll S = 0;
    for(int i = 0; i < n; i++) {
        K = max(K + b[i], a[i]);
        S += b[i];
    }

    ll P = K - S;

    ll total = 0;
    if (P >= m) {
        total = m * K;
    } else {
        if (P > 0) {
            total += P * K;
        }
        ll start = max(1LL, P + 1);
        ll count = m - start + 1;
        if (count > 0) {
            ll i = start + S;
            ll j = m + S;
            total += (i + j) * count / 2;
        }
    }
    cout << total << "\n";
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}