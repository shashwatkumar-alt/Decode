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
vi sOrt(unordered_map<int,list<int>> &adj,int n ){
    vi indegree(n);
    // Finding all indegrees
    for(auto i:adj){
        for(auto j: i.second){
            indegree[j]++;
        }
    }
    // 0 indegree walo ko push krdo
    queue<int> q;
    for(int i = 0;i<n;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    vi ans;
    while(!q.empty()){
        int front = q.front();
        q.pop();
        ans.push_back(front);
        for(auto neighbour :adj[front]){
            indegree[neighbour]--;
            if(indegree[neighbour]==0){
                q.push(neighbour);
            }
        }
    }
    return ans;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> edges(n);
    // Input and creating adjacency list.
    unordered_map<int,list<int>> adj;
    for(int i = 0;i<n;i++){
        int u,v;
        cin>>u>>v;
        edges[i].first = u;
        edges[i].second = v;
        adj[u].push_back(v);
    }
    // sorting using kahn's algorithm
    vi sOrted = sOrt(adj,n);
    // If there is cycle then the size will be 1.
    if(sOrted.size() == 1){
        
    }
    // Else the array will only be the answer.
    else{
        yes;
        cout<<1<<endl;
        for(int i = 0; i<sOrted.size();i++){
            cout<<sOrted[i]<<" ";
        }
    }
    return 0;
}