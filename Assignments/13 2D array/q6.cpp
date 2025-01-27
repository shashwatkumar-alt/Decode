// Write a function which accepts a 2D array of integers and its size as arguments and display the elements of middle row and the elements of middle column. (assuming the 2D Array to be a square matrix with odd dimentions).

#include <bits/stdc++.h>
using namespace std;
void print(int n, int m, vector<vector<int>> &arr)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == n / 2 || j == m / 2)
            {
                cout << arr[i][j] << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    print(n, m, arr);
    return 0;
}