#include<bits/stdc++.h>
using namespace std;
int main() { 
    string s = "Shashwat";
    int n = s.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            cout << s.substr(i, j - i + 1) <<endl;
        }
    }
    return 0;
}