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
    vi arr(n);
    unordered_map<int,set<int>> mp;
    for(int i= 0; i<n;i++) {
        cin>>arr[i];
        mp[arr[i]].insert(i+1);
    }
    int mini = INT_MAX;
    for(auto &it : mp){
        if(it.second.size() >= 2){
            int swaps = *it.second.begin() + (n- *(--it.second.end())-1);
            mini = min(mini, swaps);
        }
    }
    mini == INT_MAX ?cout<<-1<<'\n' : cout<<mini<<'\n';
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}