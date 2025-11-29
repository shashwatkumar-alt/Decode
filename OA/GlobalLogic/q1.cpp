#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    if (!(cin >> n >> s)) return 0;

    if (n == 0) {
        cout << '\n';
        return 0;
    }

    int size = 2 * n + 10;
    vector<char> line(size);
    int front = n + 5;
    int back = front;

    for (char c : s) {
        if (front == back) {
            line[back++] = c;
        } else if (c != line[front]) {
            line[--front] = c;
        } else {
            line[back++] = c;
        }
    }

    for (int i = front; i < back; ++i) {
        cout << line[i];
    }
    cout << '\n';

    return 0;
}