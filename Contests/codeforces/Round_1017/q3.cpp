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
void conquer(){
    int n;
    cin>>n;
    vvi grid(n,vi(n));
    vi ans,copy;
    for(int i = 0; i<n;i++){
        for(int j= 0; j<n;j++){
            cin>>grid[i][j];
            if(j==0 || i== n-1) {
                ans.push_back(grid[i][j]);
                copy.push_back(grid[i][j]);
            }
        }
    }
    sort(copy.begin(),copy.end());
    int first=1;
    for(int i = 0; i<copy.size();i++){
        if(copy[i] == first)first++;
        else break;
    }
    ans.insert(ans.begin(),first);
    for(auto i : ans){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}