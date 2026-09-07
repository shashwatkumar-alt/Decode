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
    int n,m,k;
    cin>>n>>m>>k;
    int total = n*m;
    int ans = 0;
    if (k == 0) {
        cout << total << '\n';
        return;
    }
    for (int i = 1; i < n; ++i) {
        int p1 = i * m;
        int p2 = (n - i) * m;
        if (p1 >= k) ans = max(ans, p2);
        if (p2 >= k) ans = max(ans, p1);
    }
    for (int j = 1; j < m; ++j) {
        int p1 = j * n;
        int p2 = (m - j) * n;
        if (p1 >= k) ans = max(ans, p2);
        if (p2 >= k) ans = max(ans, p1);
    }
    if (total >= k) ans = max(ans, 0);
    cout << ans <<endl;;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}