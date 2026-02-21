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
    int n,count = 1;
    cin>>n;
    string s;
    cin>>s;
    for(int i = 1 ; i < n ; i++){
        if(s[i]!=s[i-1]) count++;
    }
    if(count == n ) cout<<n<<endl;
    else if(count == 1) cout<<1<<endl;
    else if(s[0] ==s[n-1]) cout<<count<<endl;
    else cout<<count+1<<endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}