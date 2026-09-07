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
    int n,k;
    cin>>n>>k;
    vi arr(n);
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    sort(arr.rbegin(),arr.rend());
    int ans = 0;
    for(int i = 0; i<n;i++){
        if(k>0 && arr[i]>=5){
            ans += (arr[i]-5);
            k--;
        }
        else if(arr[i]>=10) ans += (arr[i]-10);
    }
    cout<<max(ans,0)<<'\n';
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}