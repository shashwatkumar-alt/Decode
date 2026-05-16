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
    ll n,x;
    cin>>n>>x;
    vll arr(x);
    for(ll i = 0; i<x;i++)cin>>arr[i];
    string s = to_string(n);
    auto it = lower_bound(arr.begin(),arr.end(),(s[0]-'0'));
    if( it == arr.begin() && *it != (s[0]-'0')){
        string a (s.size()-1,char(arr[x-1]));
        ll ans = 0;
        if(!a.empty()) ans = stoll(a);
        cout<<n-ans<<'\n';
    }
    else{
        string a = "";
        bool low = true;
        for(ll i = 0; i < s.size(); i++){
            if(low){
                string temp = to_string(*lower_bound(arr.begin(),arr.end(),(s[i]-'0')));
                a += temp;
                if(s[i]>temp[0]) low = false;
            }
            else{
                string temp = to_string(arr[x-1]);
                a += temp;
            }
        }
        ll ans = stoll(a);
        cout<<n-ans<<'\n';
    }
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}