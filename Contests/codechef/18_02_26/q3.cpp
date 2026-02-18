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
typedef vector<pair<int,int>> vpi;
static const bool fastIO = [](){
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    return true;
}();
void conquer(){
    int n,k;
    cin>>n>>k;
    vi arr(n);
    unordered_map<int,int> mp;
    for(int i = 0; i<n;i++) {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    int reset = arr[0];
    vpi b;
    for(auto &it : mp){
        b.push_back({it.second,it.first});
    }
    sort(b.begin(),b.end());
    for(auto &it : b){
        if(it.second == arr[0]) continue;
        else if(k<=0) break;
        else if(it.first <= k) {
            b.remove(it);
            --it;
            k -= it.first;
        }
    }
    cout<<b.size()<<endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}