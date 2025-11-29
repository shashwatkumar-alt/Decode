#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int stringLength(const string &A, const string &B) {
    int n = A.size(), m = B.size();
    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(m + 1, vector<int>(26, 0)));

    for (int i = n - 1; i >= 0; --i) {
        for (int j = m - 1; j >= 0; --j) {
            for (int k = 0; k < 26; ++k) {
                int result = max(dp[i + 1][j][k], dp[i][j + 1][k]);

                if (A[i] == B[j]) {
                    int charCode = A[i] - 'a';
                    if (charCode >= k)
                        result = max(result, 1 + dp[i + 1][j + 1][charCode]);
                }
                dp[i][j][k] = result;
            }
        }
    }
    return dp[0][0][0];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string A, B;
    getline(cin, A);
    getline(cin, B);

    cout << stringLength(A, B) << '\n';
    return 0;
}
