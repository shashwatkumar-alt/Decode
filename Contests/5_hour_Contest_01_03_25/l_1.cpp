#include <bits/stdc++.h>
using namespace std;
const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};

int main() {
    int r, c, n, p;
    cin >> r >> c >> n >> p;
    
    vector<vector<int>> grid(r, vector<int>(c));
    map<int, pair<int, int>> position;
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> grid[i][j];
            if (grid[i][j] > 0) {
                position[grid[i][j]] = {i, j};
            }
        }
    }

    set<int> adjacent_travelers;
    
    for (int step = 0; step < p; step++) {
        int leaving_traveler = step + 1;
        position.erase(leaving_traveler);
        
        for (int t = leaving_traveler + 1; t <= n; t++) {
            if (position.find(t) != position.end()) {
                position[t - 1] = position[t];
                position.erase(t);
            }
        }
        if (position.find(p) != position.end()) {
            int x = position[p].first;
            int y = position[p].second;

            for (int d = 0; d < 4; d++) {
                int nx = x + dx[d], ny = y + dy[d];
                if (nx >= 0 && nx < r && ny >= 0 && ny < c) {
                    for (const auto& kv : position) {
                        if (kv.second == make_pair(nx, ny)) {
                            adjacent_travelers.insert(kv.first);
                        }
                    }
                }
            }
        }
    }

    int favorable_cases = adjacent_travelers.size();
    cout << favorable_cases << "/" << (n - 1) << endl;

    return 0;
}
