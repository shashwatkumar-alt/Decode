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
    int n, m, k;
    cin >> n >> m >> k;

    bool alice = false;

    for (int i = 1; i <= k; ++i) {
        if (i <= n) {
            int new_x = n - i;
            int new_y = m;
            if (new_x <= i && new_y <= i) {
                alice = true;
                break;
            }
        }

        if (i <= m) {
            int new_x = n;
            int new_y = m - i;
            if (new_x <= i && new_y <= i) {
                alice = true;
                break;
            }
        }
    }

    alice ? cout<<"Alice\n" : cout<<"Bob\n";
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}