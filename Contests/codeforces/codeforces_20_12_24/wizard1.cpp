#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if (n >= 4) {
            vector<int> zidx;
            vector<int> nzidx;

            for (int i = 0; i < n; i++) {
                if (arr[i] != 0) nzidx.push_back(i);
                else zidx.push_back(i);
            }

            if (nzidx.empty()) {
                cout << 0 << endl;
                continue;
            }

            int num = nzidx.size();
            int r_sum = 0;
            int e_sum = ((nzidx[num - 1] * (nzidx[num - 1] + 1)) / 2) - 
                        ((nzidx[0] * (nzidx[0] - 1)) / 2);

            for (int i = 0; i < num; i++) {
                r_sum += nzidx[i];
            }

            if (e_sum == r_sum) 
                cout << 1 << endl;
            else 
                cout << 2 << endl;
        } 
        else if (n == 1) {
            int num;
            cin >> num;
            if (num == 0) 
                cout << 0 << endl;
            else 
                cout << 1 << endl;
        } 
        else if (n == 2) {
            int num1, num2;
            cin >> num1 >> num2;
            if (num1 == 0 && num2 == 0) 
                cout << 0 << endl;
            else 
                cout << 1 << endl;
        } 
        else if (n == 3) {
            int num1, num2, num3;
            cin >> num1 >> num2 >> num3;
            if (num1 == 0 && num2 != 0 && num3 == 0) 
                cout << 1 << endl;
            else if (num1 != 0 && num2 == 0 && num3 != 0) 
                cout << 2 << endl;
            else 
                cout << 1 << endl;
        }
    }
    return 0;
}
