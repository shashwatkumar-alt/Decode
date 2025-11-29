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

ll sub_sum(const vll& a) {
    ll maxi = a[0];
    ll curr = a[0];
    for(int i = 1; i < a.size(); ++i){
        curr = max(a[i], curr + a[i]);
        maxi = max(maxi, curr);
    }
    return maxi;
}

void conquer(){
    int n;
    ll k;
    cin >> n >> k;

    vll a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    vll left(n), right(n);

    ll curr = a[0];
    left[0] = curr;
    ll orig = curr;

    for(int i = 1; i < n; i++){
        curr = max(a[i], curr + a[i]);
        left[i] = curr;
        orig = max(orig, curr);
    }

    curr = a[n - 1];
    right[n - 1] = curr;
    for(int i = n - 2; i >= 0; i--){
        curr = max(a[i], curr + a[i]);
        right[i] = curr;
    }

    if(k % 2 == 0){
        cout << orig << endl;
        return;
    }

    ll ans = orig;
    for(int i = 0; i < n; i++){
        ll best_with_i = left[i] + right[i] - a[i];
        ans = max(ans, best_with_i + b[i]);
    }

    cout << ans << endl;
}

int main(){
    ll tc;
    cin >> tc;
    while(tc--){
        conquer();
    }
}
