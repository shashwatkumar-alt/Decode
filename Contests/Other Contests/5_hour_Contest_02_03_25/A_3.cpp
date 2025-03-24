#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
typedef vector<int> vi;
typedef unordered_map<int, list<int>> Graph;

static const bool fastIO = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return true;
}();

// Function to perform topological sorting (Kahn's Algorithm)
vi topologicalSort(Graph &adj, int n, int removedNode = -1) {
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
        sortedOrder.push_back(front);
        for (int neighbor : adj[front]) {
            if (neighbor != removedNode && --indegree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }

    return sortedOrder;
}

// Function to detect cycles in the graph
vi detectCycle(int n, Graph &adj) {
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
        sortedNodes.push_back(node);
        for (int neighbor : adj[node]) {
            if (--inDegree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }

    vi cycleNodes;
    for (int i = 1; i <= n; i++) {
        if (inDegree[i] > 0) {
            cycleNodes.push_back(i);
        }
    }
    
    return cycleNodes;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> edges(m);
    Graph adj;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        edges[i] = {u, v};
        adj[u].push_back(v);
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
    vector<vi> validSorts;
    for (int nodeToRemove : cycleNodes) {
        vi sortedOrder = topologicalSort(adj, n, nodeToRemove);
        if (sortedOrder.size() == n - 1) { // Valid topological sorting exists
            validSorts.push_back(sortedOrder);
        }
    }

    if (!validSorts.empty()) {
        yes;
        cout << validSorts.size() << endl;
        for (auto &sortedOrder : validSorts) {
            for (int node : sortedOrder) {
                cout << node << " ";
            }
            cout << endl;
        }
    } else {
        no;
    }

    return 0;
}
