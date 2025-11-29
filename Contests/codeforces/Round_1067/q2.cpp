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
    vi arr(2*n);
    unordered_map<int,int> mpp;
    for(int i = 0; i<2*n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }
    sort(arr.begin(),arr.end());
    auto last_unique = unique(arr.begin(), arr.end());
    arr.erase(last_unique, arr.end());
    int ans = 0;
    for(int it : arr){
        if(mpp[it]==1) ans++;
        else if(mpp[it]>n && n % 2 == 0){
            ans = 0;
            break;
        }
        else if(mpp[it]%2 == 0) ans += 2;
        else ans++;
    }
    cout << ans <<endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}