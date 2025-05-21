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
    int n, x;
    cin >> n >> x;

    vector<int> perm(n + 1, 0);
    vector<bool> used(n + 1, false);

    for (int i = 1; i <= n; ++i) {
        if ((i | x) != x) continue;
        int p = x ^ i;
        if (p < 1 || p > n || p == i) continue;
        if (!used[i] && !used[p]) {
            perm[i] = p;
            perm[p] = i;
            used[i] = used[p] = true;
        }
    }

    if (x >= 1 && x <= n) {
        if (perm[x] == 0 && !used[x]) {
            perm[x] = x;
            used[x] = true;
        }
    }
    vector<int> available;
    for (int val = 1; val <= n; ++val) {
        if (!used[val]) {
            available.push_back(val);
        }
    }
    int fillPtr = 0;
    for (int idx = 1; idx <= n; ++idx) {
        if (perm[idx] == 0) {
            perm[idx] = available[fillPtr++];
        }
    }
    for (int j = 1; j <= n; ++j) {
        cout << perm[j] << (j == n ? '\n' : ' ');
    }
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}