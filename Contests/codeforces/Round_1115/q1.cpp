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
    ll sum = 0;
    unordered_map<int,int>mp;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        mp[arr[i]]++;
        sum += arr[i];
    }
    if(n <= 2){
        cout<<sum<<'\n';
        return;
    }
    int maxi = INT_MIN, max_ele = -1;
    for(auto &i : mp){
        if(i.second > maxi){
            maxi = i.second;
            max_ele = i.first;
        }
        else if(i.second == maxi){
            if(i.first > max_ele){
                max_ele = i.first;
            }
        }
    }
    if(maxi > n/2){
        ll ans = sum - (maxi * max_ele);
        ans += (n - maxi)*max_ele + (min(maxi-(n-maxi),2)*max_ele);
        cout<<ans<<'\n';
    }
    else cout<<sum<<'\n';
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}