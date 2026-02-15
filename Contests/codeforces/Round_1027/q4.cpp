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
    vector<ll> x(n), y(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    if (n == 1) {
        cout << 1 << "\n";
        return;
    }

    vector<ll> sx = x, sy = y;
    sort(sx.begin(), sx.end());
    sort(sy.begin(), sy.end());

    ll xmin1 = sx[0],  xmin2 = sx[1];
    ll xmax1 = sx[n-1], xmax2 = sx[n-2];
    ll ymin1 = sy[0],  ymin2 = sy[1];
    ll ymax1 = sy[n-1], ymax2 = sy[n-2];

    ll fullw = xmax1 - xmin1 + 1;
    ll fullh = ymax1 - ymin1 + 1;
    ll ans = fullw * fullh;

    for (int i = 0; i < n; i++) {
        ll lx, rx, ly, ry;
        if (x[i] == xmin1) lx = xmin2;
        else lx = xmin1;

        if (x[i] == xmax1) rx = xmax2;
        else rx = xmax1;

        if (y[i] == ymin1) ly = ymin2;
        else ly = ymin1;

        if (y[i] == ymax1) ry = ymax2;
        else ry = ymax1;

        ll w = rx - lx + 1;
        ll h = ry - ly + 1;
        ll cost = w * h;
        if (cost < n) cost = n;

        if (cost < ans) ans = cost;
    }

    cout << ans << "\n";
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}