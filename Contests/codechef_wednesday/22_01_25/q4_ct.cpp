#include<bits/stdc++.h>
using namespace std;
//Data Types
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef pair<int,int> pi;
typedef pair<ll,ll> pll;

//Certain Strings using macros
#define F first
#define S second
#define pb push_back
#define MP make_pair
#define mod 1000000007


static const bool Init = [](){
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    return true;
}();


void solve(){
    ll n;
    cin>>n;
    vll a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.rbegin(),a.rend());
    ll answer=accumulate(a.begin(),a.end(),0LL);
    ll summation=0;
    ll x=n;
    for(ll i=0;i<n;i++){
        summation+=a[i];
        x--;
        answer=max(answer,summation+(x*x));
    }
    answer=max(answer,n*n);
    cout<<answer<<'\n';
}


int main(){
    ll T;
    cin>>T;
    while(T--){
        solve();
    }
}