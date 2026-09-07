#include<bits/stdc++.h>
using namespace std;

#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<vector<ll>> vvll;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef pair<int,int> pi;
typedef pair<ll,ll> pll;

#define pb push_back

static const bool fastIO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return true;
}();

const ll mod = 998244353;
const int MAXN = 200000 + 5;

ll f[MAXN], inv[MAXN];

ll bin(ll a, ll b){
    ll res = 1;

    while(b){
        if(b & 1) res = res * a % mod;

        a = a * a % mod;
        b >>= 1;
    }

    return res;
}

ll nCr(int n, int r){
    if(r < 0 || r > n) return 0;

    return f[n] * inv[r] % mod * inv[n - r] % mod;
}

void conquer(){
    int n, k;
    cin >> n >> k;

    ll ans = 0;

    for(int q = 1; q <= k; q++){
        ll ways = nCr(n - q - 1, k - q);
        ll pw = bin(q, k);

        ans = (ans + pw * ways) % mod;
    }

    cout << ans << '\n';
}

int main(){
    f[0] = 1;

    for(int i = 1; i < MAXN; i++){
        f[i] = f[i - 1] * i % mod;
    }

    inv[MAXN - 1] = bin(f[MAXN - 1], mod - 2);

    for(int i = MAXN - 2; i >= 0; i--){
        inv[i] = inv[i + 1] * (i + 1) % mod;
    }

    int tc;
    cin >> tc;

    while(tc--){
        conquer();
    }
}