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
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    return true;
}();

void conquer() {
    int n;
    string s;
    cin >> n >> s;

    // Check if all characters are 'z'
    bool all_z = true;
    for (char c : s) {
        if (c != 'z') {
            all_z = false;
            break;
        }
    }
    if (all_z) {
        cout << -1 << endl;
        return;
    }

    string res = s;

    // Construct a lexicographically larger palindrome
    for (int i = 0; i < (n + 1) / 2; i++) {
        char new_char = max(s[i], s[n - 1 - i]) + 1;

        // Avoid going beyond 'z'
        if (new_char > 'z') {
            new_char = 'a';
        }

        res[i] = res[n - 1 - i] = new_char;
    }

    cout << res << endl;
}

int main() {
    ll tc;
    cin >> tc;
    while (tc--) {
        conquer();
    }
}
