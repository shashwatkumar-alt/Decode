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
    ll a, b;
    cin >> a >> b;

    ll temp = b;
    int cntTwo = 0;

    while (temp % 2 == 0) {
        temp /= 2;
        cntTwo++;
    }

    ll best = -1;
    vll candidates;
    candidates.pb(1);
    if (temp > 1) candidates.pb(temp);

    for (int i = 0; i <= cntTwo; i++) {
        ll pow2 = 1LL << i;
        for (ll div : candidates) {
            ll k = pow2 * div;
            if (b % k != 0) continue;
            ll sum = a * k + b / k;
            if (sum % 2 == 0) best = max(best, sum);
        }
    }

    cout << best << "\n";
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}