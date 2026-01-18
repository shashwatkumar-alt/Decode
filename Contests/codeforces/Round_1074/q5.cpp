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
    int n,m,k;
    cin>>n>>m>>k;
    vi a(n);
    unordered_map<int,int> mpp;
    for(int i = 0;i<n;i++) cin>>a[i];
    for(int i = 0;i<m;i++) {
        int j;
        cin>>j;
        mpp[j]++;
    }
    string s;
    cin>>s;
    int maxi = INT_MIN,mini = INT_MAX;
    int c = 0;
    for(int i = 0;i<k;i++){
        if(s[i]=='L') c--;
        else c++;
        maxi = max(maxi,c);
        mini = min(mini,c);
    }
    for(int i = 0; i<n;i++){
        
    }
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}