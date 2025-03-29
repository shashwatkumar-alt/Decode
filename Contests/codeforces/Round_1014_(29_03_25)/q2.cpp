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
    string a, b;
    cin >> a >> b;
    ll a0 = count(a.begin(), a.end(), '0');
    ll b0 = count(b.begin(), b.end(), '0');
    ll a1 = n - a0;
    ll b1 = n - b0;

    if (a0 > b1 || b0 > a1) {
        no;
        return;
    }
    bool can = false;
    for (int i = 1; i < n; i++) {
        if ((a[i] == '1' && b[i - 1] == '0') || (b[i] == '1' && a[i - 1] == '0')) {
            can = true;
            break;
        }
    }

    if (can) yes;
    else no;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}