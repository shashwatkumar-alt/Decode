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
    ll n,m,p,q;
    cin>>n>>m>>p>>q;
    ll ratio = n/p;
    ll rem = n%p;
    if(rem == 0){
        if(m == ratio * q) yes;
        else no;
    }
    else yes;
    return;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}