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

bool good(string s){
    if(distance(s.begin(), unique(s.begin(),s.end())) <= 1) return true;
    else return false;
}
void conquer(){
    ll x;
    cin>>x;
    for(ll i = 2; i <= INT_MAX ; i++){
        string s = to_string(i);
        sort(s.begin(),s.end());
        if(good(s)){
            s = to_string(i * x);
            sort(s.begin(),s.end());
            if(good(s)){
                cout<<i<<'\n';
                return;
            }
        }
    }
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}