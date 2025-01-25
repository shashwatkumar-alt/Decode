#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    if (m > n) {
        cout << "Not Subset";
        return 0;
    }
    vector<int> brr(m);
    for (int i = 0; i < m; i++) {
        cin >> brr[i];
    }
    bool subset = false;
    for (int i = 0; i <= n - m; i++) {
        bool flag = true;
        for (int j = i, k = 0; k < m; j++, k++) {
            if (arr[j] != brr[k]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            subset = true;
            break;
        }
    }
    if (subset) {
        cout << "Subset";
    } else {
        cout << "Not Subset";
    }
    return 0;
}
