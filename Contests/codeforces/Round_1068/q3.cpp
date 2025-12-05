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
    ll k;
    cin >> n >> k;

    vll a(n),b(n);
    unordered_map<ll, ll> freq;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
        freq[a[i]]++;
    }

    sort(b.begin(), b.end());

    unordered_set<ll> used;
    vector<ll> B;

    for (ll x : b) {
        bool valid = true;
        for (ll m = x; m <= k; m += x) {
            if (!freq.count(m)) {
                valid = false;
                break;
            }
        }
        if (valid) B.push_back(x);
    }

    if (B.empty()) {
        cout << -1 << '\n';
        return;
    }
    else{
        cout<<B.size()<<'\n';
        for(auto it : B) cout<<it<<" ";
        cout<<'\n';
    }
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}