#include<bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool possible = true;
        for (int i = 1; i < n; i++) {
            int mini = min(a[i - 1], a[i]);

            a[i - 1] -= mini;
            a[i] -= mini;

            if (a[i - 1] > a[i]) {
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}