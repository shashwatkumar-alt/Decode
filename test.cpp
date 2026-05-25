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
    int maxi = INT_MIN;
    for(int i = 0 ; i < k ; i++){
        int temp;
        cin>>temp;
        maxi = max(maxi,temp);
    }
    maxi++;
    vi ans;
    for(int i = 0 ; i < n ; i++ ){
        int temp;
        cin>>temp;
        for(int j = 0; j < (maxi-temp);j++) ans.push_back(i+1);
    }
    cout<<ans.size()<<'\n';
    for(int &i : ans) cout<<i<<" ";
    cout<<'\n';
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}