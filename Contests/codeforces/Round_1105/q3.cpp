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
const ll MOD = 998244353;
void conquer(){
    int n;
    cin >> n;
    vi a(n);
    for(auto &x : a) cin >> x;

    if(n == 1){
        cout << 0 << "\n"; return;
    }
    
    int X = 0;
    for(int x : a) X ^= x;
    
    if(X == 0){
        cout << 1 << "\n";
        return;
    }

    int hb = 31 - __builtin_clz(X);
    int cnt = 0;
    
    for(int x : a) if((x >> hb) & 1) cnt++;
    cout << cnt << "\n";
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}