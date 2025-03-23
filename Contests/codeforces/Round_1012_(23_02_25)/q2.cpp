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
bool row(const vvi& grid , int x, int y){
    for(int i = 0;i<y;i++){
        if(grid[x][i] == 0) return false;
    }
    return true;
}
bool col(const vvi& grid ,int x, int y){
    for(int i = 0;i<x;i++){
        if(grid[i][y] == 0) return false;
    }
    return true;
}
void conquer(){
    int n,m;
    cin>>n>>m;
    vvi grid(n,vi(m));
    vector<pair<int,int>> cords;
    for (int i = 0; i < n; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < m; j++) {
            grid[i][j] = row[j] - '0';
            if (grid[i][j] == 1) {
                cords.push_back({i, j});
            }
        }
    } 
    if(cords.size() == m*n || cords.size() == 0){
        yes;
        return;
    }
    for(const auto& i :cords){
        bool a = row(grid,i.first,i.second);
        bool b = col(grid,i.first,i.second);
        if(a == false && b == false){
            no;
            return;
        }
    }
    yes;
    return;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}