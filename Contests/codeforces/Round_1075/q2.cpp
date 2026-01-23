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
    ll x;
    cin >> n >> x;

    ll base = 0;
    ll best = LLONG_MIN;

    for(int i = 0; i < n; i++){
        ll a, b, c;
        cin >> a >> b >> c;

        base += (b - 1) * a;
        ll gain = b * a - c;
        best = max(best, gain);
    }

    if(x <= base){
        cout << 0 << "\n";
        return;
    }

    if(best <= 0){
        cout << -1 << "\n";
        return;
    }

    ll need = x - base;
    ll rollbacks = (need + best - 1) / best;
    cout << rollbacks << "\n";
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}