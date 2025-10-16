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
    unordered_map<int,int> mpp;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }
    sort(arr.begin(),arr.end());
    auto last_unique = std::unique(arr.begin(), arr.end());
    arr.erase(last_unique, arr.end());
    n = arr.size();
    int ans = 0;
    for(int i = 0; i<n;i++){
        if(i>0){
            if(mpp[arr[i]]>mpp[arr[i-1]]) {
                ans = arr[i];
                break;
            }
        }
    }
    cout<<ans<<endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}