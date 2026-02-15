#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<vector<ll>> vvll;
typedef pair<int, int> pi;
typedef vector<vector<char>> vvc;
typedef vector<vector<int>> vvi;
typedef pair<ll, ll> pll;

static const bool fastIO = []() {
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    return true;
}();
void conquer() {
    int n;
    cin >> n;
    vi t(n);
    int count = 0;

    for (int i = 0; i < n; i++) {
        cin >> t[i];
        if (t[i] == 0) count++;
    }

    if (t[0] == 1) count++;

    unordered_map<int, array<int, 4>> assgn;
    vector<pair<int, int>> ans(n);

    assgn[0][0] = 0;
    int cptr = 1, rptr = 0, zrptr = 1;

    for (int i = 1; i < n; i++) {
        if (t[i] == 1) {
            assgn[rptr][cptr] = i;
            cptr++;
            if (cptr == 4) {
                if (zrptr >= rptr) {
                    cptr = 1;
                    rptr++;
                } else {
                    cptr = 0;
                    rptr++;
                }
            }
        } else {
            assgn[zrptr][0] = i;
            zrptr++;
        }
    }

    ans[0] = {1, 1};

    for (int i = 0; i < count; i++) {
        int x = 3 * i + 1, y = 1;
        ans[assgn[i][0]] = {x, y};

        ans[assgn[i][1]] = {x, y + 4};
        ans[assgn[i][2]] = {x + 4, y};
        ans[assgn[i][3]] = {x + 4, y + 4};
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i].first << " " << ans[i].second << endl;
    }
}
int main() {
    ll tc;
    cin >> tc;
    while (tc--) {
        conquer();
    }
    return 0;
}
