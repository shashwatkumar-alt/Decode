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
 
// for taking faster input.
static const bool Init = [](){
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    return true;
}();
 

void solve(){
    string S;
    cin>>S;
    int count = 0;

    for(auto i : S){
        if(i=='1') count++;
    }
    cout<<count<<endl;
}
 
int main(){
    ll T;
    cin>>T;
    while(T--){
        solve();
    }
}