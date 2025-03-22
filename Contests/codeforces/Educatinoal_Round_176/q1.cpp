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
    ll n, k;
    cin >> n >> k;

    ll ans = 0;

    if (n % 2 != 0) {
        n -= k;
        ans++;
    }

    ans += n / (k - 1);
    n = n % (k - 1);

    if (n != 0) ans++;

    cout << ans << endl;

}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}