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
    ll n,m,k;
    cin>>n>>m>>k;
    vll arr(n);

    ll total = 0;

    for(int i = 0; i < n ; i++){
        cin>>arr[i];
        total += arr[i];
    }

    ll full = m/(k+1);
    ll ans = full*k;
    ll rem = m%(k+1);
    ans += min(rem,k);

    cout<<min(ans,total)<<'\n';
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}