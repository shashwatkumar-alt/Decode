#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;
const int MAX = 100000;

void precompute(vector<long long> &arr){
    arr[1] = 1;
    arr[2] = 1;
    for (int i = 3; i <= MAX; i++)
    {
        arr[i] = (arr[i - 1] + arr[i - 2]) % MOD;
    }
}

int main() {
    int n, q;
    cin >> n >> q;
    vector<long long> arr(MAX+1), pos(n), pref(n + 1);
    precompute(arr);
    pref[0] = 0;
    for (int i = 0; i < n; i++) {
        cin >> pos[i];
        pos[i] = arr[pos[i]];
        pref[i + 1] = (pref[i] + pos[i]) % MOD;
    }
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        cout << (pref[r] - pref[l-1] + MOD) % MOD << '\n';
    }
    return 0;
}