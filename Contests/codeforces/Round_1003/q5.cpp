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
    int n,m;
    cin>>n>>m;
    vvi arr(n,vi(m));
    vector  <pair<int,int>> res;
    for(int i = 0;i<n;i++){
        int sum = 0;
        for(int j = 0; j<m;j++){
            cin>>arr[i][j];
            sum += arr[i][j];
        }
        res.push_back({i,sum});
    }
    sort(res.begin(), res.end(),
         [](const pair<int, int>& a,
            const pair<int, int>& b) {
             return a.second < b.second;
         });
    ll sum = 0;
    for(int i = 0 ; i<res.size();i++){
        int num = res[i].first;
        for(int j = 0 ; j<m;j++){
            ll prevsum = sum;
            sum = sum + (prevsum + arr[num][j]);
        }
    }
    cout<<sum<<endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}