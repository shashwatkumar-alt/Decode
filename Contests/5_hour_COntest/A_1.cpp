#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2000;
char grid[MAXN][MAXN];
vector<pair<int, int>> emptyCells;
unordered_map<int, vector<int>> rowMap, colMap;
int r, c;

// Function to check if four towers are connected in sequence
bool isValid(vector<pair<int, int>> &towers) {
    for (int i = 0; i < 3; i++) {
        int x1 = towers[i].first, y1 = towers[i].second;
        int x2 = towers[i + 1].first, y2 = towers[i + 1].second;
        if (!(x1 == x2 || y1 == y2)) return false;  // Must be in the same row or column
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Read input
    cin >> r >> c;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == '.') {
                emptyCells.push_back({i, j});
                rowMap[i].push_back(j);
                colMap[j].push_back(i);
            }
        }
    }

    int totalWays = 0;
    int n = emptyCells.size();

    // Iterate over all possible placements of four towers
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int x1 = emptyCells[i].first, y1 = emptyCells[i].second;
            int x2 = emptyCells[j].first, y2 = emptyCells[j].second;
            
            if (!(x1 == x2 || y1 == y2)) continue;  // Ensure adjacency

            for (int k = j + 1; k < n; k++) {
                int x3 = emptyCells[k].first, y3 = emptyCells[k].second;
                
                if (!((x2 == x3 || y2 == y3))) continue;  // Ensure adjacency

                for (int l = k + 1; l < n; l++) {
                    int x4 = emptyCells[l].first, y4 = emptyCells[l].second;
                    
                    if (!((x3 == x4 || y3 == y4))) continue;  // Ensure adjacency

                    // Create a sequence and check if it is valid
                    vector<pair<int, int>> towers = {{x1, y1}, {x2, y2}, {x3, y3}, {x4, y4}};
                    if (isValid(towers)) {
                        totalWays++;
                    }
                }
            }
        }
    }

    cout << totalWays << "\n";
    return 0;
}
