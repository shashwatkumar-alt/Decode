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
    vll arr(n);
    for(int i = 0; i<n;i++) cin>>arr[i];
    ll sum = accumulate(arr.begin(),arr.end(),0LL);
    ll maxi = sum;
    if(arr.size()>1){
        while(arr.size()>1){
            for(int i = 1;i<arr.size();i++){
                arr[i-1] = arr[i]-arr[i-1];
            }
            arr.pop_back();
            sum = abs(accumulate(arr.begin(),arr.end(),0LL));
            maxi = max(sum,maxi);
        }
    }
    cout<<maxi<<endl;
    return;
}
int main(){
    ll T;
    cin>>T;
    while(T--){
        solve();
    }
}