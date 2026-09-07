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
    int n,c;
    cin>>n>>c;
    vi arr(n);
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    string s;
    cin>>s;
    int coin_without_c = 0,not_c = 0;
    for(int i = 0;i<n;i++){
        if(s[i]=='0') coin_without_c += arr[i];
        else not_c += arr[i];
    }
    int coin_after_c = 0;
    if(coin_without_c >= c) coin_after_c = coin_without_c - c + not_c;
    cout << max(coin_without_c,coin_after_c)<<endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}