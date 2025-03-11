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
    ll n;
    cin >> n;
    vll b(2 * n);
    ll sum_b = 0;

    for (ll i = 0; i < 2 * n; i++) {
        cin >> b[i];
        sum_b += b[i];
    }

    sort(b.begin(), b.end());
    ll B_max = b.back();
    sum_b -= B_max;
    ll x = sum_b - B_max;
    bool removed = false;
    for (ll i = 0; i < 2 * n; i++) {
        if (!removed && b[i] == x) {
            removed = true;
            continue;
        }
        cout << b[i] << " ";
    }
    cout << x << "\n";
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}