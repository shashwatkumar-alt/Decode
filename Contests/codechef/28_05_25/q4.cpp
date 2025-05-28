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
    cin >> n;
    vll arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    vll ks;
    ks.pb(0);
    for (ll h : arr) {
        ks.pb(h);
        if (h > 0) ks.pb(h - 1);
    }

    sort(ks.begin(), ks.end());
    ks.erase(unique(ks.begin(), ks.end()), ks.end());

    ll minTime = n;
    int ptr = 0;

    for (ll k : ks) {
        while (ptr < n && arr[ptr] <= k) {
            ptr++;
        }
        ll survivors = n - ptr;
        ll total = k + survivors;
        minTime = min(minTime, total);
    }

    cout << minTime << endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}