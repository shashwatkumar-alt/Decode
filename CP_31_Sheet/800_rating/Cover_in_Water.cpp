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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count = 0;
    bool consecutive = false;
    for(int i = 0; i<n;i++) {
        if(s[i] == '.' )count++;
        if(i >= 2 && s[i] == '.' && s[i-1] == '.' && s[i-2] == '.') consecutive = true;
    }
    if(consecutive) cout<<2<<endl;
    else cout<<count<<endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}