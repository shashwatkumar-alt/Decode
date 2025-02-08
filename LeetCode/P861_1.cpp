#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(vector<int>& binary) {
    int decimal = 0;
    for (int bit : binary) {
        decimal = (decimal << 1) | bit;
    }
    return decimal;
}

void cgrow(vector<vector<int>>& grid, int row) {
    for(int i = 0; i < grid[row].size(); i++) {
        grid[row][i] = 1 - grid[row][i];  // Flip 0 to 1 and 1 to 0
    }
}

void cgcol(vector<vector<int>>& grid, int col) {
    for(int i = 0; i < grid.size(); i++) {
        grid[i][col] = 1 - grid[i][col];
    }
}

int finalSum(vector<vector<int>>& grid) {
    int sum = 0;
    for(auto &row : grid) {
        sum += binaryToDecimal(row);
    }
    return sum;
}

vector<int> values(vector<vector<int>>& grid) {
    int n = grid.size(), m = grid[0].size();
    vector<int> v;

    // Row-wise calculations
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = 0; j < m; j++) {
            if(grid[i][j] == 0) {
                sum += (1 << (m - j - 1));
            } else {
                sum -= (1 << (m - j - 1));
            }
        }
        v.push_back(sum);
    }

    // Column-wise calculations
    for(int i = 0; i < m; i++) {
        int sum = 0;
        for(int j = 0; j < n; j++) {
            if(grid[j][i] == 0) {
                sum += (1 << (n - j - 1));
            } else {
                sum -= (1 << (n - j - 1));
            }
        }
        v.push_back(sum);
    }

    return v;
}

int matrixScore(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();

    while (true) {
        vector<int> temp = values(grid);
        pair<int, int> maxi = {0, temp[0]};

        for (int i = 1; i < temp.size(); i++) {
            if (temp[i] > maxi.second) {
                maxi = {i, temp[i]};
            }
        }

        if (maxi.second <= 0) {
            return finalSum(grid);
        }

        if (maxi.first < n) {
            cgrow(grid, maxi.first);
        } else {
            cgcol(grid, maxi.first - n);
        }
    }
}

int main() { 
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    cout << matrixScore(grid) << endl;
    return 0;
}
