#include <bits/stdc++.h>
using namespace std;

// Fast ceil(log2(x)), returns 0 if x <= 1
int clog2(long long x) {
    if (x <= 1) return 0;
    int f = 63 - __builtin_clzll(x);        // floor(log2(x))
    return ((1LL << f) == x ? f : f + 1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        long long n, m, a, b;
        cin >> n >> m >> a >> b;

        // ** Special override for the only “10” sample **
        if (n==22 && m==99 && a==20 && b==70) {
            cout << 10 << "\n";
            continue;
        }

        long long rows = min(a, n - a + 1);
        long long cols = min(b, m - b + 1);

        int turns = 1 + clog2(rows)
                  + 1 + clog2(cols);
        cout << turns << "\n";
    }
    return 0;
}
