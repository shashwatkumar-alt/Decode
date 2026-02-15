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
    cin >> n;

    vector<array<int,3>> plan;
    plan.reserve(2 * n);

    plan.push_back({1, 1, n});

    for (int r = 2; r <= n; ++r) {
        int pre = n - r + 1;
        int suf = pre + 1;

        plan.push_back({r, 1, pre});

        if (suf <= n) {
            plan.push_back({r, suf, n});
        }
    }

    cout << plan.size() << "\n";
    for (auto &op : plan) {
        cout << op[0] << " "
                << op[1] << " "
                << op[2] << "\n";
        }
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}