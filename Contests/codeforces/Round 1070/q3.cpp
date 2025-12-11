#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

static const bool fastIO = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return true;
}();

bool ok(int r, int o, int e){
    int lo = max(0, r - e);
    int hi = min(o, r);
    if(lo > hi) return false;
    if(lo % 2 == 0) return true;
    return (lo + 1 <= hi);
}

void conquer(){
    int n;
    cin >> n;

    vector<ll> arr(n), even, odd;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] & 1) odd.push_back(arr[i]);
        else even.push_back(arr[i]);
    }

    if(odd.empty()){
        for(int i = 1; i <= n; i++) cout << 0 << " ";
        cout << "\n";
        return;
    }

    sort(odd.rbegin(), odd.rend());
    ll bestOdd = odd[0];

    sort(even.rbegin(), even.rend());
    int E = even.size(), O = odd.size();
    vector<ll> pre(E+1, 0);
    for(int i = 1; i <= E; i++) pre[i] = pre[i-1] + even[i-1];

    for(int k = 1; k <= n; k++){
        ll ans = 0;
        int up = min(k, E + 1);
        for(int t = up; t >= 1; t--){
            int remO = O - 1;
            int remE = E - (t - 1);
            if(remE < 0) continue;
            int r = k - t;
            if(ok(r, remO, remE)){
                ans = bestOdd + pre[t-1];
                break;
            }
        }
        cout << ans << (k == n ? '\n' : ' ');
    }
}

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        conquer();
    }
}
