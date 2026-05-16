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
void conquer() {
    int n, q;
    cin>>n>>q;
    vll a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    a[n-1] = max(b[n-1], a[n-1]);
    for(int i = n-2; i >= 0; i--) {
        a[i] = max({a[i+1],a[i],b[i]});
    }

    vll pref(n + 1, 0);
    pref[0] = 0;
    for(int i = 0; i < n; i++) {
        pref[i+1] = pref[i] + a[i];
    }

    for(int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l-1] << " ";
    }
    cout << '\n';
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}