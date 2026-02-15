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
bool isSmall(string s){
    int n = s.size() / 2;
    for(int i = 0; i<n;i++){
        if(s[i] < s[n - 1 - i] ) return true;
    }
    return false;
} 
void conquer(){
    int n,k;
    string s;
    cin>>n>>k;
    cin>>s;
    if(n==1){
        no;
        return;
    }
    bool same = true;
    for(int i = 0; i<s.size();i++){
        if(s[i]!=s[i-1]){
            same = false;
            break;
        }
    }
    if(same){
        no;
        return;
    }
    if(isSmall(s)){
        yes;
        return;
    }
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}