#include <bits/stdc++.h>
using namespace std;

int removeConsecutiveThrees(int num) {
    string numStr = to_string(num);
    string result;
    
    for (size_t i = 0; i < numStr.length(); i++) {
        if (i < numStr.length() - 1 && numStr[i] == '3' && numStr[i + 1] == '3') {
            i++;
        } else {
            result += numStr[i];
        }
    }
    
    return result.empty() ? 0 : stoi(result);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;

        while (x > 0) {
            if (x == 33) {
                x = 0;
                break;
            }
            x = removeConsecutiveThrees(x);
            x -= 33;
        }

        cout << (x == 0 ? "YES" : "NO") << endl;
    }
    return 0;
}
