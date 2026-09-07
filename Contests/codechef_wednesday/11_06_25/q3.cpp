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

    vector<int> arr(n);
    for (int& x : arr) {
        cin >> x;
    }

    int or_mask = 0;
    int maxi    = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] < maxi) {
            int diff = maxi ^ arr[i];
            or_mask |= diff;
        }
        maxi = max(maxi, arr[i]);
    }

    if (or_mask == 0) {
        cout << 0 << "\n";
    }
    else {
        int b = 31 - __builtin_clz(or_mask);
        int K = 1 << b;
        cout << K << "\n";
    }
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}