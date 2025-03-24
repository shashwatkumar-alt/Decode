#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<vector<ll>> vvll;
typedef pair<int, int> pi;
typedef vector<vector<char>> vvc;
typedef vector<vector<int>> vvi;
typedef pair<ll, ll> pll;

static const bool fastIO = []() {
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    return true;
}();

// Function to perform topological sorting (Kahn's Algorithm)
vi topologicalSort(unordered_map<int, list<int>> &adj, int n, int removedNode = -1) {
    vi indegree(n + 1, 0);
    for (auto &[node, neighbors] : adj) {
        for (int neighbor : neighbors) {
            indegree[neighbor]++;
        }
    }

    queue<int> q;
    for (int i = 1; i <= n; i++) {
        if (i != removedNode && indegree[i] == 0) {
            q.push(i);
        }
    }

    vi sortedOrder;
    while (!q.empty()) {
        int front = q.front();
        q.pop();
        sortedOrder.pb(front);
        for (int neighbor : adj[front]) {
            if (neighbor != removedNode && --indegree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }

    return sortedOrder;
}

// Function to detect a cycle using Kahn's Algorithm
vi detectCycle(int n, unordered_map<int, list<int>> &adj) {
    vi inDegree(n + 1, 0);
    for (auto &[node, neighbors] : adj) {
        for (int neighbor : neighbors) {
            inDegree[neighbor]++;
        }
    }

    queue<int> q;
    for (int i = 1; i <= n; i++) {
        if (inDegree[i] == 0) {
            q.push(i);
        }
    }

    vi sortedNodes;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        sortedNodes.pb(node);
        for (int neighbor : adj[node]) {
            if (--inDegree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }

    vi cycleNodes;
    for (int i = 1; i <= n; i++) {
        if (inDegree[i] > 0) {
            cycleNodes.pb(i);
        }
    }
    
    return cycleNodes;
}

int main() {
    fastIO;
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> edges(m);
    unordered_map<int, list<int>> adj;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        edges[i] = {u, v};
        adj[u].pb(v);
    }

    // Detect cycle nodes
    vi cycleNodes = detectCycle(n, adj);
    
    if (cycleNodes.empty()) {
        // No cycle exists, just print topological sorting
        vi sortedOrder = topologicalSort(adj, n);
        if (sortedOrder.size() == n) {
            yes;
            cout << "1" << endl;
            for (int node : sortedOrder) {
                cout << node << " ";
            }
            cout << endl;
        } else {
            no;
        }
        return 0;
    }

    // If cycle contains exactly 2 nodes, print "NO"
    if (cycleNodes.size() == 2) {
        no;
        return 0;
    }

    // Try removing each cycle node one by one and check if topological sorting is possible
    for (int nodeToRemove : cycleNodes) {
        vi sortedOrder = topologicalSort(adj, n, nodeToRemove);
        if (sortedOrder.size() == n - 1) { // Valid topological sorting exists
            yes;
            cout << "1" << endl;
            for (int node : sortedOrder) {
                cout << node << " ";
            }
            cout << endl;
            return 0;
        }
    }

    // If no valid topological sort is possible, print "NO"
    no;
    return 0;
}
