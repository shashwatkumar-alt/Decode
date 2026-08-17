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
    int n,m;
    cin>>n>>m;
    set<char> c;
    for(int i = 0; i < n; i++){
        string s;
        cin>>s;
        tolower(s[0]);
        c.insert(s[0]);
    }
    bool flag = true;
    for(int i = 0; i < m ; i++){
        string s;
        cin>>s;
        for(char j : s){
            j = tolower(j);
            if(c.find(j) == c.end()) flag = false;
        }
    }
    if(flag) yes;
    else no;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}