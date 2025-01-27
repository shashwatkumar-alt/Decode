#include<bits/stdc++.h>
using namespace std;
//Data Types
typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<ll> vll;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<ll>> vvll;
typedef pair<int,int> pi;
typedef pair<ll,ll> pll;
// Macros
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
// for taking faster input.
static const bool Init = [](){
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    return true;
}();
void solve(){
    int n;
    cin>>n;
    vi arr(n);
    for(int i = 0; i<n;i++) cin>>arr[i];
    vi ans;
    ll sum = (accumulate(arr.begin(),arr.end(),0LL));
    ans.pb(sum);
    ll maxi = ans[0];
    if(arr.size()>1){
        while(arr.size()>1){
        for(int i = arr.size()-1;i>=0;i--){
            arr[i] = arr[i]-arr[i-1];
        }
        arr.erase(arr.begin());
        sum = abs(accumulate(arr.begin(),arr.end(),0LL));
        ans.pb(sum);
        }
    }
    for(auto i : ans){
        if(i>maxi) maxi = i;
    }
    cout<<maxi<<endl;

}
int main(){
    ll T;
    cin>>T;
    while(T--){
        solve();
    }
}