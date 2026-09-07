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
    ll k, diff = 0, minFlip = INT_MAX;
    cin >> n >> k;
    vi a(n), b(n);

    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        cin >> b[i];
        ll d = (b[i] - a[i] + 9) % 9;
        ll move = min(d, 9 - d);
        diff += move;
        minFlip = min(minFlip, 9 - 2 * move);
    }

    diff = k - diff;
    if (diff < 0) no;
    else if (diff % 2 == 0 || minFlip <= diff) yes;
    else no;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}