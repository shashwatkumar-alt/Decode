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
    int n;
    ll K;
    cin >> n >> K;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll base = 0;
    for (ll x : a) 
        base += popc(x);
    vector<vector<pair<ll,int>>> opts(n);
    for (int i = 0; i < n; i++) {
        ll ai = a[i];

        for (int m = 0; m <= 60; m++) {
            ll target = ( (m==63 ? (1ULL<<63) : ((1ULL<<m)-1)) );
            if (m==0) target = 0;
            if (target < ai) continue;
            ll d = target - ai;
            if (d > K) break;
            ll gain = popc(target) - popc(ai);
            if (gain > 0) {
                opts[i].push_back({d, (int)gain});
            }
        }
        opts[i].push_back({0, 0});
    }

    int VMAX = n * 60;
    vector<ll> dp(VMAX+1, INF), ndp(VMAX+1, INF);
    dp[0] = 0;
    int curMaxV = 0;

    for (int i = 0; i < n; i++) {
        fill(ndp.begin(), ndp.end(), INF);
        for (int v = 0; v <= curMaxV; v++) {
            if (dp[v] == INF) continue;
            for (auto &pr : opts[i]) {
                ll d = pr.first;
                int g = pr.second;
                int nv = v + g;
                if (nv > VMAX) nv = VMAX;
                ndp[nv] = min(ndp[nv], dp[v] + d);
            }
        }
        dp.swap(ndp);
        curMaxV = min(VMAX, curMaxV + 60);
    }

    ll bestGain = 0;
    for (int v = 0; v <= curMaxV; v++) {
        if (dp[v] <= K) bestGain = v;
    }

    cout << base + bestGain << "\n";
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}