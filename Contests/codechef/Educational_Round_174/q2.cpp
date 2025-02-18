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
    vi a,b;
    unordered_map <int , int> mpp,ampp,bmpp;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            cin>>arr[i][j];
            mpp[arr[i][j]]++;
            if((i+j)%2==0){
                a.push_back(arr[i][j]);
                ampp[arr[i][j]]++;
            }
            else{
                b.push_back(arr[i][j]);
                bmpp[arr[i][j]]++;
            }
        }
    }
    
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}