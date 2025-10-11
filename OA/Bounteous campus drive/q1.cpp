#include <bits/stdc++.h>
using namespace std;

struct Node {
    int left = -1;
    int right = -1;
};

int N, M;
vector<int> guardians;
vector<Node> tree;
int counter = 0;
int result = -1;

void inorder(int node) {
    if (node == -1 || result != -1) return;

    inorder(tree[node].left);
    
    counter++;
    if (counter == M) {
        result = guardians[node];
        return;
    }
    
    inorder(tree[node].right);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);

    vector<string> parts;
    string temp;
    stringstream ss(input);
    while (getline(ss, temp, ';')) parts.push_back(temp);

    N = stoi(parts[0]);

    guardians.resize(N);
    stringstream gs(parts[1]);
    for (int i = 0; i < N; i++) gs >> guardians[i];

    stringstream ps(parts[2]);
    int pathwayCount, connectionCount;
    ps >> pathwayCount >> connectionCount;

    tree.assign(N, Node());

    for (int i = 3; i < 3 + pathwayCount; i++) {
        stringstream es(parts[i]);
        int u, v;
        es >> u >> v;
        if (tree[u].left == -1) tree[u].left = v;
        else tree[u].right = v;
    }

    M = stoi(parts.back());

    inorder(0);

    cout << result << "\n";

    return 0;
}
