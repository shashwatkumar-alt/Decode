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
    ll n,k;
    cin>>n>>k;

    vll a(n);
    ll sum = 0;

    for(ll i = 0 ; i < n ; i++){
        cin>>a[i];
        sum += a[i];
    }

    ll target = 2*k - sum;

    sort(a.begin(),a.end());

    ll ans = 0;
    ll l = 0 , r = n - 1;

    while(l < r){
        if(a[l] + a[r] > target){
            ans += (r - l);
            r--;
        }
        else{
            l++;
        }
    }

    cout<<ans<<endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}