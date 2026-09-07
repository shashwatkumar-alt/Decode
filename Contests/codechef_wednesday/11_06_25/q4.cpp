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
    int n, q;
    cin >> n >> q;
    vector<ll> arr(n + 2, 0);
    for (int i = 1; i <= n; ++i) cin >> arr[i];
    ll count = 0;
    for (int i = 1; i < n; ++i) count += min(arr[i], arr[i+1]);
    while (q--) {
        int temp;
        ll x;
        cin >> temp >> x;
        if (temp > 1) count -= min(arr[temp-1], arr[temp]);
        if (temp < n) count -= min(arr[temp], arr[temp+1]);
        arr[temp] = x;
        if (temp > 1) count += min(arr[temp-1], arr[temp]);
        if (temp < n) count += min(arr[temp], arr[temp+1]);
        cout << count << "\n";
    }
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}