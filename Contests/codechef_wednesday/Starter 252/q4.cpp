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

vector<vector<int>> getSubsequences(vector<int>& arr) {
    int n = arr.size();
    vector<vector<int>> result;
    for (int i = 0; i < (1 << n); i++) {
        vector<int> current;
        for (int j = 0; j < n; j++) {
            if ((i & (1 << j)) != 0) {
                current.push_back(arr[j]);
            }
        }
        result.push_back(current);
    }
    
    return result;
}

void conquer(){
    int n;
    cin>>n;
    vi arr(n);
    for(int i = 0; i<n;i++) cin>>arr[i];
    vector<vector<int>> result;
    result = getSubsequences(arr);

}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}