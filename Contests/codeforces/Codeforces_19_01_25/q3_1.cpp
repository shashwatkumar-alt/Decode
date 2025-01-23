#include <bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        unordered_map<int, int> freq;
        int count = 0;

        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;

            int complement = k - temp;
            if (freq[complement] > 0) {
                count++;
                freq[complement]--;
            } else {
                freq[temp]++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
