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
    ll n,m,a,b;
    cin>>n>>m>>a>>b;
    ll numerator = m - b * n;
    ll denominator = a - b;
    if (denominator == 0) {
        if (a * n == m) yes;
        else no;
        return;
    }
    if (numerator % denominator != 0) {
        no;
        return;
    }

    ll x = numerator / denominator;

    if (x >= 0 && x <= n) yes;
    else no;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}