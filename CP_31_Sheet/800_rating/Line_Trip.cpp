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
    int n,x;
    cin>>n>>x;
    vi arr(n),diff(n+1);
    for(int i = 0;i<n;i++) {
        cin>>arr[i];
        if(i == 0) diff[i] = arr[i];
        else diff[i] = arr[i] - arr[i-1];
    }
    diff[n] = 2*(x-arr[n-1]);
    sort(diff.begin(),diff.end());
    cout<<diff[n]<<endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}