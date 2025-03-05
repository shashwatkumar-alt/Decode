#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<vector<ll>> vvll;
typedef pair<int,int> pi;
typedef vector<vector<char>> vvc;
typedef vector<vector<int>> vvi;
typedef pair<ll,ll> pll;
static const bool fastIO = [](){
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    return true;
}();
bool checkCycleDFS(int node,unordered_map<int,bool> &visited, unordered_map<int,bool> &dfsVisited,unordered_map<int,list<int>> &adj){
    visited[node] =true;
    dfsVisited[node] = true;
    for(auto neighbour: adj[node]){
        if(!visited[neighbour]){
            bool cycleDetected = checkCycleDFS(neighbour,visited,dfsVisited,adj);
            if(cycleDetected){
                return true;
            }
        }
        else if(dfsVisited[neighbour]){
            return true;
        }
    }
    dfsVisited[node] = false;
}
bool isCycle(unordered_map<int,list<int>> &adj){
    // call dfs for all components
    unordered_map<int,bool> visited;
    unordered_map<int,bool> dfsVisited;
    for(int i = 0 ; i<n;i++){
        if(!visited[i]){
            bool cycleFound  = checkCycleDFS(i,visited,dfsVisited,adj);
            if(cycleFound){
                return true;
            }
        }
    }
    return false;
}

int main(){
    fastIO;
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> edges(n);
    
    // Input and adjacency list at the same time.
    unordered_map<int,list<int>> adj;
    for(int i = 0;i<n;i++){
        int u,v;
        cin>>u>>v;
        edges[i].first = u;
        edges[i].second = v;
        adj[u].push_back(v);
    }
    
    bool cycle = isCycle(adj);
    if(!cycle){
        sOrt(adj);
    }
}